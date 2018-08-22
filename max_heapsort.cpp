#include <iostream>
using namespace std;

void max_heapify(int *arr, int i, int n){
	int left = 2*i;
	int right = 2*i + 1;
	int largest;

	if(left<=n && arr[left] > arr[i]){
		largest = left;
	} 
	else{
		largest = i;
	}
	if(right<=n && arr[right] > arr[largest]){
		largest = right;
	}

	if(largest != i){
		swap(arr[i], arr[largest]);
		max_heapify(arr, largest, n);
	}
}

void build_heap(int *arr, int n){
	for(int i=n/2; i>=1; i--){
		max_heapify(arr, i, n);
	}
}

void heapsort(int *arr, int n){
	build_heap(arr, n);
	for(int i=1; i<=n; i++){
		cout<<arr[i]<<"  ";
	}
	for(int i=1; i<=n; i++){
		swap(arr[1], arr[n-i+1]);
		max_heapify(arr, 1, n-i);
	}
}

int main(){
	int n;cin>>n;
	int arr[n+1];
	arr[0] = -1000;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
		cout<<" ";
	}
	heapsort(arr, n);
	cout<<"\n";
	for(int i=1; i<=n; i++){
		cout<<arr[i]<<"  ";
	}
}