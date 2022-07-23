#include <iostream>
#include <unordered_map>
#include <queue>
#include <list>
using namespace std;

template<typename T>
///sssp:single source shortest path
class graph{
public:
    unordered_map<T, list<T>> adjlist;
    void addedge(T u, T v, bool bidir = true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    void print() {
        for(auto p:adjlist){
            cout<<p.first<<"-->";
            for(auto neighbours :p.second){
                cout<<neighbours<<" ";
            }
            cout<<endl;
        }
    }


    void bfs(T src){
    queue<T> q;
    unordered_map<T,bool> visited;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int f =q.front();
        q.pop();
        cout<< f <<" ";
        for(auto neighbour : adjlist[f]){
            if(visited.count(neighbour) == 0){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
        cout<<endl;
    }
    }

   int sssp(T src,T des){
    queue<T> q;
    unordered_map<T,bool> visited;
    unordered_map<T,T>parent;//
    unordered_map<T,int>distance;//distance of each key from source
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        T f =q.front();
        q.pop();

        for(auto height : adjlist[f]){
            if(visited.count[neighbour] == 0){
                q.push(neighbour);
                visited[neighbour]=true;
                parent[neighbour]=f;
                  distance[neighbour]=distance[f]+1;
            }
        }
    }

        for(auto p:distance)
        {
            cout<<"distance of"<<p.first<<"from"<<src<<" "<<p.second<<endl;
                    }

    T child=des;
    while(child!=parent[child])
    {
        cout<<child <<"<--";
        child=parent[child];


    }
    cout<<child<<endl;
    }


};

int main() {
    graph<int> g;
   int board[50]={0};//by default haar bucket pe 0
   board[2]=13;
   board[5]=2;
   board[9]=18;
   board[18]=11;
   board[17]=-13;
   board[20]=-14;
   board[24]=-8;
   board[25]=-10;
   board[32]=-2;
   board[34]=-22;
   for(int u=0;u<=36;u++)
   {
       for(int dice=1;dice<=6;dice++)
       {
           int v=u+dice;
           v+=board[v];
           g.addedge(u,v,false);
       }
   }
   int distance =g.sssp(0,36);
   cout<<"number of dice rolls"<<distance<<endl;
   g.addedge(0,1);
   // g.addedge(0,3);
   // g.addedge(2,3);
   // g.addedge(4,3);
   // g.addedge(4,5);
    //g.addedge()
//    g.addedge("garvit","himanshu",false);
//    g.addedge("himanshu","avishka",false);
//    g.addedge("avishka","dhruv",false);
//    g.addedge("dhruv","himanshu",false);
//    g.addedge("garvit","dhruv",false);
//    g.addedge("garvit","kunal",false);
//    g.addedge("dhruv","kunal");
//
//    g.print();
   // g.bfs(0);
    g.sssp(0,5);
    return 0;
}


