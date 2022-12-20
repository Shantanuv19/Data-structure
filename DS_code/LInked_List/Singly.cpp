//linked list singly
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
typedef struct node structure;
structure *head=NULL, *newnode=NULL, *temp=NULL;
void insert_f(){
	newnode=new structure;
	cout<<"Enter data for node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		temp=newnode;
	}else{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"Node is Created..."<<endl;
}
void del_f(){
	structure *temp1, *temp2;
	while(temp1!=NULL){
		temp2=temp1;
		temp1=temp1->next;
	}
	temp2=NULL;
	free(temp1);
}
void insert_b(){
	newnode=new structure;
	cout<<"Enter data for insertion on begning: ";
	cin>>newnode->data;
	newnode->next=head;
	head=newnode;
}
void del_b(){
	structure *temp1=head, *temp2;
	temp1=head;
	head=temp1->next;
	free(temp1);
	cout<<"1st Node deleted..."<<endl;
}
void display(){
	structure *temp3=head;
	while(temp3!=NULL){
		cout<<temp3->data<<ends;
		temp3=temp3->next;
	}
}
int ins_s(){
	int pos, count=0;
	cout<<"Enter position: ";
	cin>>pos;
	structure *temp1=head, *p=head;
	while(p!=NULL){
		++count;
		p=p->next;
	}
	cout<<count<<endl;
	if(pos>count){
		cout<<"Envalid position..."<<endl;
		return 0;
	}else{
		while(pos--){
			if(pos==1){
				newnode=new structure;
				cout<<"Enter data for insert on S_position: ";
				cin>>newnode->data;
				break;
			}else{
				temp1=temp1->next;
			}
		}
	}
		newnode->next=temp1->next;
		temp1->next=newnode;
		cout<<"Data inserted on S_position..."<<endl;
}
int del_s(){
	int pos, count=0;
	cout<<"Enter position: ";
	cin>>pos;
	structure *temp1=head, *p=NULL;
	pos-=1;
	while(pos--){
		p=temp1;
		temp1=temp1->next;
	}
	p->next=temp1->next;
	cout<<"Data Deleted from S_position..."<<endl;
}
int main(){
	while(1){
		cout<<"1> Insert on front"<<endl;
		cout<<"2> Delete on front"<<endl;
		cout<<"3> Insert on back"<<endl;
		cout<<"4> Delete on Back"<<endl;
		cout<<"5> Insert on Specific Position"<<endl;
		cout<<"6> Delete on Specific Position"<<endl;
		cout<<"7> Display"<<endl;
		cout<<"8> Exit"<<endl;
		cout<<"\tEnter Your Choice: ";
		int choice;
		cin>>choice;
		switch(choice){
			case 1: insert_f(); break;
			case 2: del_f(); break;
			case 3: insert_b(); break;
			case 4: del_b(); break;
			case 5: ins_s(); break;
			case 6: del_s(); break;
			case 7: display(); break;
			default: cout<<"Envalid try again...";
			case 8: cout<<"Exit...";
		}
		if(choice==8){
			break;
		}
	}
}
