#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int arr[20][20], row,col,a,b,c,max1,max2;
	cout<<"Enter the size of the row:- ";
	cin>>row;
	cout<<"Enter the col of the arr:- ";
	cin>>col;
	for(a=0; a<row; a++)
	{
		for(b=0; b<col; b++)
		{
			cout<<"Enter the element of the arr:- ";
			cin>>arr[a][b];
		}
	}
	max1=max2=INT_MIN;
	for(a=0; a<row; a++)
	{
		for(b=0; b<col; b++)
		{
			if(arr[a][b]>max1)
			{
				max2=max1;
				max1=arr[a][b];
			}
			else if(arr[a][b]>max2 && arr[a][b]<max1)
		{
			max2=arr[a][b];
		}
		}
	}
	cout<<"1st max no is:- "<<max1;
	cout<<"\n2nd max no is:- "<<max2;
}
