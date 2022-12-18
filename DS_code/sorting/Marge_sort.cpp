//marge sort
#include<iostream>
using namespace std;
void marge(int *arr, int l, int mid, int r){
	int i, j, k, new_arr[100];
	i=l;
	k=l;
	j=mid+1;
	while(i<=mid && j<=r){
		if(*(arr+i)< *(arr+j)){
			new_arr[k]=*(arr+i);
			++i;
		}else{
			new_arr[k]=*(arr+j);
			++j;
		}
		++k;
	}
	while(i<=mid){
		new_arr[k]=*(arr+i);
		++i;
		++k;
	}
	while(j<=r){
		new_arr[k]=*(arr+j);
		++j;
		++k;
	}
	for(int a=0; a<k; a++){
		*(arr+a)=new_arr[a];
	}
}
void M_sort(int *arr, int l, int r){
	int mid;
	if(l<r){
		mid=(l+r)/2;
		M_sort(arr, l, mid);
		M_sort(arr, mid+1, r);
		marge(arr, l, mid, r);
	}
}
int main(){
	int size;
	cout<<"Enter size: ";
	cin>>size;
	int arr[size];
	for(int a=0; a<size; a++)
	{
		cin>>arr[a];
	}
	M_sort(arr, 0, size-1);
	for(int a=0; a<size; a++){
		cout<<arr[a]<<" ";
	}
}
