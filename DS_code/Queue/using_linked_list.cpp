#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head, *newnode, *temp;
void enqueue(int *rear, int size){
	if(*rear == size-1){
		cout<<"Queue Overflow...";
	}else{
		 newnode=new struct node;
		 cout<<"Enter value for new node: ";
		 cin>>newnode->data;
		 newnode->next=NULL;
		 if(head==NULL){
		 	head=newnode;
		 	temp=newnode;
		 }else{
		 	temp->next=newnode;
		 	temp=newnode;
		 	++(*rear);
		}
	}
}
void dequeue(int *front, int *rear){
	if(*front==*rear){
		cout<<"Queue Underflow...";
	}else{
		struct node *t=head;
		head=head->next;
		free(t);
		++(*front);
	}
	if(*front==*rear){
		*front=-1;
		*rear=-1;
	}
}
void display(int *front, int *rear){
	struct node *p=head;
	if(*front == *rear){
		cout<<"Queue Empty...";
	}else{
		while(p!=NULL){
			cout<<p->data<<ends;
			p=p->next;
		}
	}
}
int main(){
	int val, size, front=-1, rear=-1;
	cout<<"Enter size: ";
	cin>>size;
	do{
		cout<<"1> enqueue: "<<endl;
		cout<<"2> dequeue: "<<endl;
		cout<<"3> display: "<<endl;
		cout<<"4> exit: "<<endl;
		cout<<"\tEnter Your Choice: ";
		cin>>val;
		switch(val){
			case 1: enqueue(&rear, size); break;
			case 2: dequeue(&front, &rear); break;
			case 3: display(&front, &rear); break;
			case 4: cout<<"Exit...";
			default: cout<<"Envalid...";
		}
	}while(val!=4);
}
