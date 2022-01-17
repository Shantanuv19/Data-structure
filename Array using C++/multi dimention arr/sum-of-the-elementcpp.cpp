#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max][max], row, col, a, b, sum=0;
	cout<<"Enter the size of the row:- ";
	cin>>row;
	cout<<"Enter the size of the col:- ";
	cin>>col;
	for(a=0; a<row; a++)
	{
		for(b=0; b<col; b++)
		{
			cout<<"Enter the element of the arr:- ";
			cin>>arr[a][b];
		}
	}
	for(a=0; a<row; a++)
	{
		for(b=0; b<col; b++)
		{
			sum=sum+arr[a][b];
		}
	}
	cout<<"Sum of the array is:- "<<sum;
}
