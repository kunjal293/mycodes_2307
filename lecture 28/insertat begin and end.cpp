// LinkedList.cpp
#include <iostream>
using namespace std;

//////////////////////// CLASS NODE ///////////////////////
class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};
//////////////////////// CLASS NODE ///////////////////////

void InsertAtBegin(node* &head, node* &tail, int data) {
	if (!head) { // Iska mtlb hai pehli node aa rhi hai toh head & tail both will update
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		n -> next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	if (!head) {
		node* n = new node(data);
		head = tail = n;
	}
	else {
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL" << endl;

}
int main() {

	node* head, *tail;
	head = tail = NULL;


	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 14);
	InsertAtEnd(head, tail, 50);
	InsertAtEnd(head, tail, 19);
	InsertAtEnd(head, tail, 2);
//print the linked list
	printLL(head);
	// InsertAtMid(head, tail, 3, 100);
	// printLL(head);
	node* head1, *tail1;
	head1 = tail1 = NULL;
    cout<<"printing a linked list after function insert at end"<<endl;
	InsertAtEnd(head1, tail1, 2);
	InsertAtEnd(head1, tail1, 3);
	InsertAtEnd(head1, tail1, 6);
	InsertAtEnd(head1, tail1, 7);
	InsertAtEnd(head1, tail1, 11);

	printLL(head);
	// node* newHead = mergeLL(head, head1);
	// printLL(newHead);
	// deleteAtBegin(head, tail);
	// printLL(head);
	// deleteAtEnd(head, tail);
	// printLL(head);
	// deleteAtMid(head, tail, 2);
	// printLL(head);
	// node* mid = midLL(head);
	// if (!mid) {
	// 	cout << "Middle element not present" << endl;
	// }
	// else {
	// 	cout << "Middle element is: " << mid->data << endl;
	// }

	return 0;
}


