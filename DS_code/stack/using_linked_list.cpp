//stack using linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head, *temp, *newnode;
void push(int *top, int size){
	if((*top)==size-1){
		cout<<"Stack Overloading...";
	}else{
		++(*top);
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"Enter data for Push: ";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
			temp=newnode;
		}else{
			temp->next=newnode;
			temp=newnode;
		}
	}
}
void pop(int *top){
	struct node *temp1=head, *t;
	int p=*top;
	if(*top==-1){
		cout<<"Stack Unterflow...";
	}else{
		while(--p){
			temp1=temp1->next;
		}
		temp1->next=NULL;
		--(*top);
		cout<<"Pop Completed...";
	}
}
void display(int *top){
	struct node *p=head;
	while(p!=NULL){
		cout<<p->data<<ends;
		p=p->next;
	}
}
int main(){
	int size, val, top=-1;
	cout<<"Enter size of stack: ";
	cin>>size;
	do{
		cout<<"1> push"<<endl;
		cout<<"2> pop"<<endl;
		cout<<"3> display"<<endl;
		cout<<"\tEnter your choice: ";
		cin>>val;
		switch(val){
			case 1: push(&top, size); break;
			case 2: pop(&top); break;
			case 3: display(&top); break;
			case 4: cout<<"Exit...";
			default: cout<<"Envalid...";
		}
	}while(val!=4);
}
