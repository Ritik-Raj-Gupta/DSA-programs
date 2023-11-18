// OVERFLOW & UNDERFLOW check function still to be made
#include<iostream>
using namespace std;
struct node{
	int data; node* next;
	node(int x):data(x),next(NULL){}
};

struct myStack{
	int siz; int top=-1; node* head; node* ele=head;
	myStack(int x):siz(x){}
	void length(){
		if(top==-1) cout<<"Stack is empty!\n";
		else{
			cout<<"Length of stack is: "<<top+1<<endl;
		}
	}
	
	void push(int x){
		if(top>siz) cout<<"Stack overflow!\n";
		else{
			node* temp=new node(x);
			ele=temp; ele=ele->next;
			top++;
		}
	}
	
	int pop(node* head){
		if(top==-1) { cout<<"Stack underflow!\n"; return 0;}
		else{
			node* curr=head;
			while(curr->next!=NULL){ curr=curr->next;}
			int res=curr->data;
			delete(curr);
			top--;
			return res;
			}
		}
	
	void traverse(){
		cout<<"The contents of stack are: ";
		while(ele!=NULL){
			cout<<ele->data<<" "; ele=ele->next;
		}cout<<endl;
	}
};

int main(){ int cap,x,n;
	cout<<"Enter capacity of stack: ";
	cin>>cap;
	myStack st(cap);
	cout<<"Enter number of elements to insert: ";
	cin>>n;
	cout<<"Enter elements of stack: ";
	cin>>st.head->data;
	for(int i=0;i<n-1;i++){
	cin>>x;
	st.push(x);
	}
	st.length();
	st.traverse();
	return 0;
}
