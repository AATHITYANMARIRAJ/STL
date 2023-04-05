//Linked list implementation
#include <iostream>
using namespace std;


class Node{
	public:
		int data;
		Node* next;
	
};
int main(){
	Node* head;
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	
	//allocating 3 nodes
	one=new Node();
	two=new Node();
	three=new Node();
	
	//allocating values
	one->data=2;
	two->data=3;
	three->data=4;
	
	//allocating next values
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	//displaying the values
	head=one;
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
	
	return 0;
}