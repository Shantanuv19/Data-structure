#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p,r,t;
    cout<<"Enter the price:- ";
    cin>>p;
    cout<<"Enter the rate:- ";
    cin>>r;
    cout<<"Enter the time:- ";
    cin>>t;
    float si;
    si=(p*r*t)/100;
    cout<<"\nsimple intreast:- "<<si<<endl;
}

