#include<iostream>
using namespace std;

/*void min_heap(int arr[],int n,int i){
	int j,temp;
	temp = arr[i];
	j = 2*i;
	while(j<=n)
	{
		if(arr[j] > arr[j+1])
		{
			j += 1;
		}
		if(temp<arr[j]){break;}
		else if(temp>arr[j])
		{
			arr[j/2] = arr[j];
			j = j*2;
		}
	}
	arr[j/2] = temp;
}*/

void min_heapify (int Arr[] , int i, int n)
{
	int left  = 2*i;
	int right = 2*i+1;
	int smallest;
	if(left <= n and Arr[left] < Arr[ i ] )
	     smallest = left;
	else
	    smallest = i;
	if(right <= n and Arr[right] < Arr[smallest] )
	    smallest = right;
	if(smallest != i)
	{
	    swap (Arr[ i ], Arr[ smallest ]);
	    min_heapify (Arr, smallest,n);
	} 
}

void build_minheap (int Arr[],int n) 
{
    for( int i = n/2 ; i >= 1 ; i--)
    min_heapify (Arr, i,n);
}

void heapsort(int Arr[],int n)
{
	build_minheap(Arr,n);
	for(int i=1;i<=n;i++)
	{
		swap(Arr[0],Arr[n-i+1]);
		min_heapify(Arr,1,n-i);
	}
	
}

int main()
{
	int n;cin>>n;
	int Arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>Arr[i];
	}
	//build_minheap(Arr,n);
	heapsort(Arr,n);
	for(int i=n;i>=1;i++)
	{
		cout<<Arr[i]<<"  ";
	}
	
}
