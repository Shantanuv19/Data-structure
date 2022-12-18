//binary search
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10}, key;
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter key between 1-10 for search: ";
	cin>>key;
	int a, p=0;
	if(arr[size/2]>key){
		for(a=0; a<=size/2; a++){
			if(arr[a]==key){
				p=1;
				cout<<"Element is founded at: "<<a+1;
				break;
			}
		}
	}else{
		for(a=size/2; a<size; a++){
			if(arr[a]==key){
				p=1;
				cout<<"Element is founded at: "<<a+1;
			}
		}
	}
	if(p=0){
		cout<<"Element is not present in the array list...";
	}
}
