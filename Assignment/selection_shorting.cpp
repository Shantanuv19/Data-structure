#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], temp, a, b, c, size;
	cout<<"Ente the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
	}
	for(a=0; a<size; a++)
	{
		for(b=a+1; b<size; b++)
		{
			if(arr[a]>arr[b])
			{
				temp=arr[b];
				arr[b]=arr[a];
				arr[a]=temp;
			}
		}
	}
	for(a=0; a<size; a++)
	{
		cout<<"\t"<<arr[a];
	}
}
