//bubble sort
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cout<<"Enter size: ";
	cin>>size;
	int arr[size];
	cout<<"Enter element of the arr: ";
	for(int a=0; a<size; a++)	
		cin>>arr[a];
		
	for(int a=0; a<size; a++)	
	{
		int d=0;
		for(int b=a+1; b<size; b++){
			if(arr[a]>arr[b]){
				int d=1;
				swap(arr[a], arr[b]);
			}
		}
		if(d=0){
			break;
		}
	}
	for(int a=0; a<size; a++)
		cout<<arr[a]<<" ";
}
