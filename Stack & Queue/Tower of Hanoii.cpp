#include<iostream>
using namespace std;

void ToH(int n,string A, string B, string C){
	if(n==1) {
	cout<<"Move 1 from "<<A<<" to "<<C<<endl;
	return;
	}
	ToH(n-1,A,C,B);
	cout<<"Move "<<n-1<<" from "<<A<<" to "<<C<<endl;
	ToH(n-1,B,A,C);
}

int main(){
	int n=4;
	string A="Source",B="intermid",C="destn";
	ToH(n,A,B,C);
	return 0;
}

