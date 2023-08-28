#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node(int x){
		data=x;
		next=NULL;
	}
};

node* deleteEnd(node* head){
	if(head==NULL)
	return NULL;
	node* curr=head;
	while(curr->next->next!=NULL){
		curr=curr->next;
	}
	delete(curr->next);
	curr->next=NULL;
	return head;
}

void printList(node* head){
	node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
int main(){
	node* head=new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=new node(40);
	cout<<"Before deletion: \n";
	printList(head);
	head=deleteEnd(head);
	cout<<"\nAfter deletion: \n";
	printList(head);
	return 0;
}
