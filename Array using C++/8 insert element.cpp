// 									!! insert new element in array using c++ !!
#include<iostream>
#define MAX_SIZE 1000
using namespace std;
int main()
{
	int arr[MAX_SIZE];
	int a,b,c,pos,size;
	cout<<"Enter the size of the element:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the element:- ";
		cin>>arr[a];
	}
	cout<<"Enter the pos:- ";
	cin>>pos;
	cout<<"Enter value of new element:- ";
	cin>>c;
	if(pos>size || pos<0)
	{
		"Entered pos is envalid";
	}
	else
	{
		for(b=size; b>pos-1; b--)
		{
			arr[b] = arr[b-1];
		}
		arr[pos-1] = c;
		size++;
		for(b=0; b<size; b++)
		{
			cout<<"\nelement are:- ";
			cout<<arr[b];
		}
	}
}
