//											!! find number of even and odd element in array !!
#include<iostream>
#define max_size 1000
using namespace std;
int main()
{
	int arr[max_size];
	int a,b,c,even=0,odd=0;
	cout<<"Enter the size of the arr:- ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		cout<<"Ener the value of the element:- ";
		cin>>arr[b];
	}
	for(b=1; b<=a; b++)
	{
		if(arr[b]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"No of even is:- "<<even<<endl;
	cout<<"No of odd is:- "<<odd;
}
