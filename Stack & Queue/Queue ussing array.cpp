#include<iostream>
using namespace std;
#define max 100
struct queue{
	int first, last, cap;
	int* que;
	queue(int x){
		first=last=0;
		cap=x; que=new int[max];
	}
	void enqueue(int x){
		if(last==cap){ cout<<"Queue overflow!\n"; return;}
		que[last]=x;
		last++; return;
	}
	int dequeue(){
		if(first==last){cout<<"Queue underflow!\n"; return max;}
		int res=que[first];
		for(int i=0;i<last;i++){
			que[i]=que[i+1];
		}
		last--;
		return res;
	}
	void traverse(){
		int i; if(first==last){ cout<<"Queue is empty!\n"; return;}
		for(i=first;i<last;i++){
			cout<<que[i]<<" ";
		}
		}
	int queueFront(){
		if(last==first){ cout<<"Queue is empty!\n"; return 0;}
		return que[first];
	}
};
int main(){
	int cap,x=0,e;
	cout<<"Enter capacity of queue: ";
	cin>>cap;
	queue myq(cap);
	cout<<"Enter number of elements to insert: ";
	cin>>e;
	cout<<"Enter elements of queue: ";
	for(int i=0;i<e;i++){
		cin>>x; myq.enqueue(x); 
	}
	myq.traverse();
	int d=myq.dequeue();
	if(d!=max){
	cout<<"\nDeleted element is: "<<d<<endl;}
	myq.traverse();
	int a=myq.queueFront();
	if(a!=0){
	cout<<"\nFront element is: "<<a<<endl;}
	return 0;
}

