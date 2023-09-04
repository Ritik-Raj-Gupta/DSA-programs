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
	node* curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}cout<<endl;
}

node* insertEnd(node* head,int x){
	node* temp=new node(x);
	if(head==NULL) return temp;
	node* curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	return head;
}

node* insertPos(node* head, int pos, int x){
	node* temp=new node(x);
	node* curr=head;
	if(head==NULL) return temp;
	if(pos==1){
		temp->next=head;
		return temp;
	}
	for(int i=1;i<pos-1 && curr->next!=NULL; i++){
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}

node* deletePos(node* head, int pos){
	if(head==NULL) return head;
	if(pos==1){
		node* temp=head->next;
		delete(head);
		return temp;
	}
	node* curr=head;
	for(int i=1;i<pos-1; i++){
		if(curr!=NULL)
		curr=curr->next;
	}
	if(curr!=NULL){
	node* temp=curr->next;
	curr->next=curr->next->next;
	delete(temp);
	}
	return head;
}

int main(){
	int n,i,x,ele,pos;
	cout<<"enter size of ll: ";
	cin>>n;
	cout<<"Enter elements of ll: ";
	cin>>x;
	node* head=new node(x);
	node* curr=head;
	for(i=0;i<n-1;i++){
		cin>>x;
		node* temp=new node(x);
		curr->next=temp;
		curr=curr->next;
	}
	cout<<"Enter position to insert element: ";
	cin>>pos;
	cout<<"Enter element to insert: ";
	cin>>ele;
	head=insertPos(head,pos,ele);
	printList(head);
	cout<<"Enter position to delete element: ";
	cin>>pos;
	head=deletePos(head,pos);
	printList(head);
	return 0;
}
