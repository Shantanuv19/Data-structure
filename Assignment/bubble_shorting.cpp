#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], x=0, temp, size, a=0, b, c;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
	}
	for(x=0; x<size; x++)
	{
		for(a=0; a<size-1; a++)
		{
			if(arr[a]>arr[a+1])
			{
				temp=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=temp;
			}
		}
	}
	for(a=0; a<size; a++)
	{
		cout<<"\t"<<arr[a];
	}
}
