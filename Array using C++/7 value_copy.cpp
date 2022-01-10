#include<iostream>
#define max_size 1000
using namespace std;
int main()
{
	int a[max_size], b[max_size];
	int d,c;
	cout<<"Enter the size of the arr;- ";
	cin>>d;
	for(c=1; c<=d; c++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>a[c];
	}
	
	for(c=1; c<=d; c++)
	{
		b[c]=a[c];
	}
	for(c=1; c<=d; c++)
	{
		cout<<"\nValue of the b[size] is:- "<<b[c];
	}
}
