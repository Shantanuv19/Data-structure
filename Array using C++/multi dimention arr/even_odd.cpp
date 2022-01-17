#include<iostream>
using namespace std;
int main()
{
	int arr[2][2], row, col, a, b, c, even, odd;
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
			if(arr[a][b]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	cout<<"No of even is:- "<<even;
	cout<<"\nNo of odd is:- "<<odd;
}
