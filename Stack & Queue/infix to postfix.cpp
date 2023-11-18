#include<iostream>
using namespace std;
#define max 100
#include<string>
struct mystack{
	int top;
	char* arr;
	
	mystack(){
		top=-1; arr=new char[max];
	}
	
	void push(char x){
		arr[++top]=x;
	}
	
	char pop(){
		top--;
		return arr[top+1];
	}
	
	char stTop(){
		return arr[top];
	}
	
	bool isEmpty(){
		if(top==-1) return true;
		return false;
	}
	
	void display(){
		for(int i=0;arr[i]!='\0';i++){
			cout<<arr[i]<<" ";
		}cout<<endl;
	}
}st;

int preced(char x){
	if(x=='+' || x=='-') return 1;
	if(x=='/' || x=='*') return 2;
	if(x=='^') return 3;
}

bool isOperand(char x){
	if(x!='+' || x!='-' || x!='*' || x!='/' || x!='^') return false;
	return true;
}

//string infixToPostfix(string infix){
//	string postfix;
//	for(int i=0;infix[i]!='\0';i++){
//		if(isOperand(infix[i])){
//			postfix+=infix[i];
//		}
//		else{
//			if(!st.isEmpty()){
//			while(preced(st.stTop())>=preced(infix[i])){
//				postfix+=st.pop();
//				if(st.isEmpty()) break; // remember to break when stack is empty else it will add any charcter to end of it
//				}
//			}
//			st.push(infix[i]);
//		}
//	}
//	cout<<"Stack: ";
//	st.display();
//	while(!st.isEmpty()){
//		postfix+=st.pop();
//	}
//	return postfix;
//}

char* infixToPostfix(char* infix){
	char* postfix=new char[sizeof(infix)+1];
	int i=0,j=0;
	while(infix[i]!='\0'){
		if(isOperand(infix[i])){
			postfix[j++]=infix[i++];
		}
		else{
			if(!st.isEmpty()){
			while(preced(st.stTop())>=preced(infix[i])){
				postfix[j++]=st.pop();
				if(st.isEmpty()) break; // remember to break when stack is empty else it will add any charcter to end of it
				}
			}
			st.push(infix[i++]);
		}
	}
	while(!st.isEmpty()){
		postfix[j++]=st.pop();
	}
	postfix[j]='\0';
	return postfix;
}

int main(){
	//string infix="a+b*c-d/e";
	//string postfix=infixToPostfix(infix);
	char* infix="a+b*c-d/e";
	char* postfix=infixToPostfix(infix);
	cout<<postfix;
	return 0;
}
