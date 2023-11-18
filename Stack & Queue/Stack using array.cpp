#include<iostream>
using namespace std;
//#include<stack> // already ha stack defined with all stack opertaions
				  // syntax-> stack<int> mystack; || mystack.push(val) || mystack.pop()
#define max 1000
struct mystack{
	int top;
	int cap;
	int* arr;
	mystack(int c){
		cap=c;
		top=-1;
		arr=new int[max];
	}
	void push(int x){
		if(top==cap-1) cout<<"Stack overflow! "<<endl;
		else{
			top++;
			arr[top]=x;
		}
	}
	int pop(){
		if(top==-1){cout<<"Stack underflow! "<<endl; return -1;}
		int dele=arr[top];
		top--;
		return dele;
	}
	int size(){
		return top+1;
	}
	int peek(){
		return arr[top];
	}
	void showStack(){
		for(int i=0;i<top+1;i++){
			cout<<arr[i]<<" ";
		}cout<<endl;
	}
};

int main(){
	int cap,x;
	cin>>cap;
	mystack s1(cap);
	for(int i=0;i<cap;i++){
		cin>>x;
		s1.push(x);
	}
	cout<<"Stack is: ";
	s1.showStack();
	int dele=s1.pop();
	cout<<"Element popped: "<<dele;
	cout<<"\nStack after pop is: ";
	s1.showStack();
	cout<<"Peek: "<<s1.peek();
	cout<<"\nSize: "<<s1.size();
	return 0;
}
