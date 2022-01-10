#include<iostream>
#define max 1000
using namespace std;
int main()
{
	int arr[max];
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
		cout<<arr[b];
	}
}
