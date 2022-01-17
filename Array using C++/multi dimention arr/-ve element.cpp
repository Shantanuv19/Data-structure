#include<iostream>
using namespace std;
int main()
{
	int arr[20][20],a,b,c,row,col,ve=0;
	cout<<"Enter the value of the row:- ";
	cin>>row;
	cout<<"Enter the valud of the col:- ";
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
			if(arr[a][b]<0)
			{
				ve++;
			}
		}
	}
	cout<<"No of the -ve element is:- "<<ve;
}
