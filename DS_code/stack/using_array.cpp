// Stack using array
#include<iostream>
using namespace std;
void push(int *stack, int size, int *top){
	if(*top==size-1){
		cout<<"Overflow...";
	}else{
		++(*top);
		cout<<"Enter data for Push: ";
		int value;
		cin>>value;
		*(stack+*top)=value;
	}
}
void pop(int *top){
	if(*top==-1){
		cout<<"Underflow...";
	}else{
		--(*top);
		cout<<"Pop completed..."<<endl;
	}
}
void display(int *stack, int top){
	if(top==-1){
		cout<<"Stack is empty...";
	}else{
		for(int a=0; a<=top; a++){
			cout<<*(stack+a)<<ends;
		}
	}
}
int main(){
	int size, top=-1;
	cout<<"Enter Size: ";
	cin>>size;
	int stack[size];
	while(1){
		int val;
		cout<<"1> push"<<endl;
		cout<<"2> pop"<<endl;
		cout<<"3> display"<<endl;
		cout<<"\tEnter Your choice: ";
		cin>>val;
		switch(val){
			case 1: push(stack, size, &top); break;
			case 2: pop(&top); break;
			case 3: display(stack, top); break;
			default: cout<<"Envalid...";
		}
	}
}
