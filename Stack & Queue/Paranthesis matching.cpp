#include<iostream>
using namespace std;
#define max 100
struct stack{
	int top;
	char* arr;
	stack(){ top=-1; arr=new char[max]; }
	
	void push(char x){
		if(top>max) cout<<"Stack overflow!";
		else{
			top++;
			arr[top]=x;
		}
	}
	
	char pop(){
		char x='\0';
		if(top==-1) return x;
		else{
			x=arr[top];
			top--;
		}
		return x;
	}
	
	bool isEmpty(){
		if(top==-1) return true;
		else return false;
	}
	
	void Display(){
		for(int i=0;i<top;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

void paranthesisMatch(char* exp){
	stack st; char x;
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
			st.push(exp[i]);
			st.Display();
		}
		else{
			x=st.pop();
			if(exp[i]==')' && (x=='{' || x=='[')){
				cout<<"Brackets not matching!";
				return;
			}
			else if(exp[i]=='}' && (x=='(' || x=='[')){
				cout<<"Brackets not matching!";
				return;
			}
			else if(exp[i]==']' && (x=='(' || x=='{')){
				cout<<"Brackets not matching!";
				return;
			}
		}
	}
	if(st.isEmpty()){
		cout<<"Brackets matching!";
	}
	else{
		cout<<"Brackets not matching!";
	}
}

int main(){
	char* exp="[a+b-{c*d*(q+r)}]";
	paranthesisMatch(exp);
	return 0;
}
