#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], a, b, c,x=0, size;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
	}
	
	cout<<"Enter the searching element:- ";
	cin>>b;
	for(a=0; a<size; a++)
	{
		if(arr[a]==b)
		{
			cout<<"Element is founded:- "<<arr[a];
			x=1;
		}
	}
	if(x==0)
	{
		cout<<"Element is Not founded";
	}
}
