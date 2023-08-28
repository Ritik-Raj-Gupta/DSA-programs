#include<iostream>
using namespace std;
struct node{
	int data;
	node* prev;
	node* next;
	node(int x){
		data=x;
		prev=NULL;
		next=NULL;
	}
};

void printList(node* head){
	node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

int main(){
	node *head =new node(10);
	node* temp1= new node(20);
	node *temp2 =new node(30);
	node* temp3= new node(40);
	head->next=temp1;
	temp1->next=temp2;
	temp1->prev=head;
	temp2->next=temp3;
	temp2->prev=temp1;
	temp3->prev=temp2;
	printList(head);
	return 0;
}
