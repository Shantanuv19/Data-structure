//										!! find negative element in array !!
#include<iostream>
#define max_size 1000
using namespace std;
int main()
{
	int arr[max_size];
	int a,b,c=0;
	cout<<"Enter the size of the arr:- ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		cout<<"Enter the value of the element:- ";
		cin>>arr[b];
	}
	for(b=1; b<=a; b++)
	{
		if(arr[b]<0)
		{
			c++;
		}
	}
	cout<<"Total no of the element is:- "<<c;
}
