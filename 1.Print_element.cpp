// 										!!Print element of the array using c++!!

#include<iostream>
#define MAX_SIZE 1000
using namespace std;
int main()
{
	int arr[MAX_SIZE];
	int a,b;
	cout<<"Enter the size of arr:- ";
	cin>>a;
	
	for(b=1; b<=a; b++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[b];
	}
	
	cout<<"Elements of the arr are:- \n";
	for(b=1; b<=a; b++)
	{
		cout<<"\t"<<arr[b];
	}
}
