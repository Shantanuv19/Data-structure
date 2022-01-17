#include<iostream>
using namespace std;
int main()
{
	int arr[20][20],a,b,row,col,max,min;
	cout<<"Enter the row-size of the arr:- ";
	cin>>row;
	cout<<"Enter the col-size of the arr:- ";
	cin>>col;
	for(a=0; a<row; a++)
	{	
		for(b=0; b<col; b++){
			cout<<"Enter the element of the arr:- ";
			cin>>arr[a][b];
		}
	}
	max=arr[0][0];
	min=arr[0][0];
	for(a=0; a<row; a++)
	{
		for(b=0; b<col; b++){
		if(arr[a][b]>max)
		{
			max=arr[a][b];
		}
		if(arr[a][b]<min)
		{
			min=arr[a][b];
		}
	}
	}
	cout<<"Max value is:- "<<max;
	cout<<"Min value is:- "<<min;
}
