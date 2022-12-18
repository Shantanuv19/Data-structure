//selection sort
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
		int min=a;
		for(int b=a+1; b<size; b++){
			if(arr[b]<arr[min]){
				min=b;
			}
		}
		if(a!=min){
			swap(arr[a], arr[min]);
		}
	}
	for(int a=0; a<size; a++){
		cout<<arr[a]<<" ";
	}
}
