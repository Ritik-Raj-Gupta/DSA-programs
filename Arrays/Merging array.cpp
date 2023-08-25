#include<iostream>
#include<algorithm>
using namespace std;
// Using sort() function i.e. merge then sort
/*
void merge(int a[],int b[],int n,int m){
	int c[m+n];
	for(int i=0;i<m;i++){
		c[i]=a[i];
	}
	for(int j=0;j<n;j++){
		c[j+m]=b[j];
	}
	sort(c,c+m+n); // takes firts parameter the starting address of the array to be sorted, second parameter is the last address to iterate to
	for(int i=0;i<m+n;i++){
		cout<<c[i]<<" ";
	}
}
int main(){
	int a[5]={34,35,23,55,90};
	int b[5]={1,67,33,20,89};
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	merge(a,b,n,m);
	return 0;
}
*/
// -------------------------------------------------------------------

// Merging to sorted arrays
int main(){
	int n,m;
	cout<<"Enter size of 1st array: ";
	cin>>n;
	cout<<"Enter size of 2nd array: ";
	cin>>m;
	int i,j,k;
	int arr1[n];
	int arr2[m];
	int arr3[n+m+1];
	cout<<"Enter array1 elements: ";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"Enter array2 elements: ";
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	i=0;j=0;k=0;
	while(i<n && j<m){
	for(k=0;k<n+m;k++){
		if(arr1[i]>arr2[j]){
			arr3[k]=arr2[j++];
		}
		else{
			arr3[k]=arr1[i++];
			}
		}
	}
	for(k=0;k<n+m;k++){
		cout<<arr3[k]<<" ";
	}
	return 0;
}
