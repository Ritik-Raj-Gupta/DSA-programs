#include<iostream>
using namespace std;

// Bubble sort
/*
void Bubble_sort(int arr[], int arrsize){
	int i,j;
	for(i=0;i<arrsize;i++){
		for(j=0;j<arrsize-i-1;j++){ // j<arrsize-i-1 because after every iteration of i 1 max value is sorted
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int n,i;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	Bubble_sort(arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/

//Insertion sort

void Insertion_sort(int arr[], int arrsize){
	int key,i,k=0;
	for(i=1;i<arrsize;i++){
		k=i-1;
		key=arr[i];
			while(k>=0 && key<arr[k]){
				arr[k+1]=arr[k];
				k=k-1;
			}
			arr[k+1]=key;
	}
}
int main(){
	int n,i;
	cout<<"Enter size of array: ";
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


//Selection Sort
/*
void Selection_sort(int arr[],int arrsize){
	int i=0,j,min;
	for(i=0;i<arrsize;i++){
		min=i;
		for(j=i+1;j<arrsize;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(arr[i],arr[min]);
	}
}
int main(){
	int size,i=0;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	Selection_sort(arr,size);
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/
