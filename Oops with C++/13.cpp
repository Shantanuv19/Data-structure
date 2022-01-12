#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    cout<<"big value is:-"<<a<<endl;
    else if(b>a && b>c)
    cout<<"big value is:-"<<b<<endl;
    else
    cout<<"big value is:-"<<c;
}

