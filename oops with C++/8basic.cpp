#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string greet="hello";
    string bbsr="cse";
    cout<<greet[3]<<endl;
    cout<<greet<<endl;
    cout<<greet+"cse"<<endl;
    cout<<greet+bbsr<<endl;
    bbsr=greet+bbsr;
    cout<<bbsr<<endl;
    bbsr+="@";
    cout<<bbsr<<endl;
}
