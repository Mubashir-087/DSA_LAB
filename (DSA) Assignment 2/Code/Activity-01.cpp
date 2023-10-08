#include <iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* next;

		Node(int val) {
			data = val;
			next = nullptr;
		}
};

class SinglyLinkedList {
	public:
		Node* head;

		SinglyLinkedList() {
			head = nullptr;
		}

		// Function to insert a new node at the end of the linked list
		void Insert_Node(int val) {
			Node* newNode = new Node(val);
			if (head == nullptr) {
				head = newNode;
			} else {
				Node* current = head;
				while (current->next != nullptr) {
					current = current->next;
				}
				current->next = newNode;
			}
		}

		// Function to display the data, address, and next address of each node in the linked list
		void display() {
			Node* current = head;
			while (current != nullptr) {
				cout << "Data in the Node: " << current->data << endl;
				cout << "Node Address: " << current << endl;
				cout << "Next Node Address: " << current->next << endl;
				cout << endl; // Add a blank line for separation
				current = current->next;
				cout<<"\n**************************************\n";
			}
		}

};

int main() {
	SinglyLinkedList myList;
	myList.Insert_Node(23);
	myList.Insert_Node(87);
	myList.Insert_Node(100);

	myList.display();

	return 0;
}

