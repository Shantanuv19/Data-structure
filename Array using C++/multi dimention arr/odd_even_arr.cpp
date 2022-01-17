#include<iostream>
using namespace std;
int main()
{
	int arr[20][20], row, col, a, b, c, even=0, odd=0;
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
			if(arr[a][b]%2==1)
			{
				odd++;
			}
			else
			{
				even++;
			}
		}
	}
	cout<<"No of even is:- "<<even;
	cout<<"\nNo of odd is:- "<<odd;
}
