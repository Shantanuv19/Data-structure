//									!! find two max number in arr uisng c++ !!
#include<iostream>
#include<limits.h>
#define max_size 1000
using namespace std;
int main()
{
	int arr[max_size];
	int a,b,c,max1,max2;
	cout<<"Enter the size of the arr:- ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[b];
	}
	max1=max2=INT_MIN;
	for(b=1; b<=a; b++)
	{
		if(arr[b]>max1)
		{
			max2=max1;
			max1=arr[b];
		}
		else if(arr[b]>max2 && arr[b]<max1)
		{
			max2=arr[b];
		}
	}
	cout<<"first max no is:- "<<max1<<endl;
	cout<<"second max is:- "<<max2;
}
