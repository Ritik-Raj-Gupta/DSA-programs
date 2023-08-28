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
int main(){
	node *head= new node(10);
	node *temp1= new node(20);
	node *temp2= new node(30);
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
}
