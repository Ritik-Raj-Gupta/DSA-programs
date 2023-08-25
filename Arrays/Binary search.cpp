#include<iostream>
using namespace std;
int main(){
	int n, first, last, middle,i,num,flag=0;
	cout<<"Enter number of elements: ";
	cin>>n;
	first=0;
	last=n-1;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter element to search: ";
	cin>>num;
	middle=(first+last)/2;
	while(first<last){
		if(arr[middle]<num){
			last=middle-1;
		}
		else if(arr[middle]>num){
			first=middle+1;
		}
		else{
			cout<<"Element found at position "<<middle+1;
			flag=1;
			break;
		}
		middle=(first+last)/2;
	}
	if(flag==0){
		cout<<"Element not found!";
	}
	return 0;
}
