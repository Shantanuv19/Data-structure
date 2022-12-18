#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10}, key;
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter key between 1-10 for search: ";
	cin>>key;
	int a;
	for(a=0; a<size; a++){
		if(arr[a]==key){
			cout<<"Element is founded at: "<<a+1;
			break;
		}
	}
	if(a==size){
		cout<<"Element is not present in the array list...";
	}
}
