#include <iostream>
using namespace std;

class Node{
	private:
		int data;
		Node *next;
	public:
		Node *head;
		Node(){
			head=NULL;
		}
		
		void insert_end(int n){
		if (head==NULL){
//			cout<<"Linked list is empty"<<endl;
			head=new Node();
			head->data=n;
			head->next=NULL;
			}	
		}
		
		void display(){
			if(head==NULL){
				cout<<"Linked list is empty"<<endl;
			}
			else
			{
			cout<<head->data<<endl;
			}
			
		}
};

int main(){
	Node obj;
	obj.insert_end(5);
	obj.display();
	return 0;
}
