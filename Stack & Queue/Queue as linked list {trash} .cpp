#include<iostream>
using namespace std;

struct qnode{
	int data;
	qnode* next;
	qnode(int x):data(x),next(NULL){}
};

struct queue{
	qnode* first; qnode* last;
	queue():first(NULL),last(NULL){}
	
	void enqueue(int x){
		qnode* temp=new qnode(x);
		if(last==NULL){
			first=last=temp;
			return;
		}
		
		last->next=temp;
		last=last->next;
	}
	
	void dequeue(){
		if(last==NULL){
			cout<<"Empty queue!\n";
			return;
		}
		qnode* temp=first;
		first=first->next;
		if(first==NULL) last=NULL;
		delete(temp);
	}
	
	void traverse(){
		qnode* temp=first;
		cout<<"Contents of queue are: ";
		while(temp!=last){
			cout<<" <-- "<<temp->data; 
			temp=temp->next;
		}cout<<" <-- "<<temp->data<<endl;
	}
	
	void fd(){
		cout<<"First element is: "<<first->data<<endl;
	}
};

int main(){
	queue myq; int siz, x;
	cout<<"Enter number of elements to insert: ";
	cin>>siz;
	cout<<"Enter elements of queue: ";
	for(int i=0;i<siz;i++){
		cin>>x;
		myq.enqueue(x);
	}
	myq.traverse();
	cout<<"Using dequeue:\n";
	myq.traverse();
	myq.fd();
	return 0;
}
