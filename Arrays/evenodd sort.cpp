#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int  n){
	int i,j,cur;
	for(i=2;i<n;i++){
		j=i-2;
		if(i%2==0){
			cur=arr[i];
			while(j>=0 && cur>arr[j]){
				arr[j+2]=arr[j];
				j=j-2;
			}
			arr[j+2]=cur;
		}
		else{
			cur=arr[i];
			while(j>=0 && cur<arr[j]){
				arr[j+2]=arr[j];
				j=j-2;
			}
			arr[j+2]=cur;
		}
	}
}
int main(){
	int n,i=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	Insertion_sort(arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
