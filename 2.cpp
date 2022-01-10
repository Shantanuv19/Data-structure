#include<iostream>
#define max 1000
using namespace std;
int main()
{
	int arr[max];
	int a,b,sum=0;
	cout<<"Enter the size of arr:- ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		cout<<"Enter the value of the element:- ";
		cin>>arr[b];
	}
	for(b=1; b<=a; b++)
	{
		sum=sum+arr[b];
	}
	cout<<"Sum of the element are:- "<<sum;
}
