//													!! find max number & min number in array uisng c++ !!

#include<iostream>
#define max_size 1000
using namespace std;
int main()
{
	int arr[max_size];
	int a,b,min,max;
	cout<<"Enter the value of arr:- ";
	cin>>a;
	
	for(b=1; b<=a; b++)
	{
		cout<<"Enter the value of the element:- ";
		cin>>arr[b];
	}
	
	for(b=1; b<=a; b++)
	{
		if(arr[b]>max)
		{
			max=arr[b];
		}
		if(arr[b]<min)
		{
			min=arr[b];
		}
	}
	cout<<"max= "<<max;
	cout<<"min= "<<min;
}
