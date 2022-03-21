#include<iostream>
using namespace std;
int main()
{
	int arr[100], size, a, b, c,max,min=arr[0];
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		if(arr[a]>max)
		{
			max=arr[a];
		}
		else if(arr[a]<min)
		{
			min=arr[a];
		}
	}
	cout<<"Max is:- "<<max<<endl<<"Min is:- "<<min;
}
