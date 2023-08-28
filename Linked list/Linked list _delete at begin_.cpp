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

node* deleteBegin(node* head){
	if(head==NULL)
	return NULL;
	else{
		node* temp=head->next;
		delete(head);
		return temp;
	}
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
	head=deleteBegin(head);
	printList(head);
	return 0;
}
