#include<iostream>
#define max 1000
using namespace std;
int main ()
{
   int a, j, temp, arr[max], ele, size;
   cout<<"Enter the size of the arr:- ";
   cin>>size;
   for(a=0; a<size; a++)
   {
   	cout<<"Enter the element of the arr:- ";
   	cin>>arr[a];
   }
   cout <<"Entered element are:- \n";
   for(a=0; a<size; a++) {
      cout <<arr[a]<<"\t";
   }
cout<<endl;
for(a=0; a<size; a++) {
   for(j=a+1; j<size; j++)
   {
      if(arr[j] < arr[a]) {
         temp = arr[a];
         arr[a] = arr[j];
         arr[j] = temp;
      }
   }
}
cout <<"after shorting the element:- \n";
for(a=0; a<size; a++) {
   cout <<arr[a]<<"\t";
}
}
