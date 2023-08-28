#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
	node(int x){
		data=x;
		next=NULL;
		prev=NULL;
	}
};

void printList(node* head){
	node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

node* insertEnd(node* head){
	node* temp=new node(50);
	node*curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	temp->prev=curr;
	return head;
}

int main(){
	node* head =new node(10);
	node* temp=new node(20);
	node* temp1=new node(30);
	head->next=temp;
	temp->prev=head;
	temp->next=temp1;
	temp1->prev=temp;
	head=insertEnd(head);
	printList(head);
	return 0;
}
