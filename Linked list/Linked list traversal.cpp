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
void printList(node* head){
	node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
int main(){
	int x;
	node *head=new node(0);
	head->next=new node(10);
	head->next->next=new node(20);
	head->next->next->next=new node(30);
	head->next->next->next->next=new node(40);
	printList(head);
	node *head2=new node(0);
	node* curr2= head2;
	for(int i=0;i<5;i++){
		cin>>x;
		curr2=curr2->next=new node(x);
	}
	printList(head2);
	return 0;
}
