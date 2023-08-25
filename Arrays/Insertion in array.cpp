#include<iostream>
using namespace std;
int main(){
	int arr[100]={1,2,3,4,5,6};
	int i=0,k,v; //k is index, v is value to be inserted at k
	cin>>k;
	cin>>v;
	for(i=5;i>=k;i--){   // for(J=n-1;J>=k;J--) >>> J is the counter , n is number of elements rn
		arr[i+1]=arr[i]; //	main logic part
	}                    //
	arr[k]=v;            //
	cout<<"Array: \n";
	for(i=0;i<7;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
