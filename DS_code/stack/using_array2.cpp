//stack
#include<iostream>
#define MAX 100
using namespace std;
int size, stack[MAX], top=-1;
void push(){
	int value;
	if(top==size-1){
		cout<<"Stack Overflow...";
	}else{
		cout<<"Enter value: ";
		++top;
		cin>>stack[top];
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack Underflow...";
	}else{
		top--;
		cout<<"Pop completed...";
	}
}
void display(){
	if(top==-1){
		cout<<"Stack is empty..."<<endl;
	}else{
		for(int a=0; a<=top; a++){
			cout<<stack[a]<<"\t";
		}
	}
}
int main(){
	cout<<"Enter size: ";
	cin>>size;
	int val;
	do{
		cout<<"1> Push: "<<endl;
		cout<<"2> Pop: "<<endl;
		cout<<"3> Display: "<<endl;
		cout<<"4> Exit";
		cout<<"\tEnter Your choice: ";
		cin>>val;
		switch(val){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: cout<<"Exit...";
			default: cout<<"Envalid...";
		}
	}while(val!=4);
}
