//Circular
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next, *pre;
};
typedef struct node structure;
structure *head=NULL, *newnode=NULL, *temp=NULL;
void insert_f(int *data){
	++(*data);
	newnode=new structure;
	cout<<"Enter data for node: ";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->pre=NULL;
	if(head==NULL){
		head=newnode;
		temp=newnode;
	}else{
		newnode->pre=temp;
		temp->next=newnode;
		temp=newnode;
		head->pre=temp;
	}
	cout<<"Node is Created..."<<endl;
}
void del_f(int *data){
	int v=*data;
	structure *temp1=head, *temp2;
	while(v--){
		temp2=temp1;
		temp1=temp1->next;
	}
	--(*data);
	temp2=NULL;
	free(temp1);
}
void insert_b(int *data){
	++(*data);
	newnode=new structure;
	cout<<"Enter data for insertion on begning: ";
	cin>>newnode->data;
	newnode->next=head;
	newnode->pre=temp;
	head->pre=newnode;
	temp->next=newnode;
	head=newnode;
}
void del_b(int *data){
	--(*data);
	structure *temp1=head, *temp2;
	temp1=head;
	head=temp1->next;
	head->pre=temp;
	free(temp1);
	cout<<"1st Node deleted..."<<endl;
}
void display(int *data){
	int v=*data;
	structure *temp3=head;
	while(v--){
		cout<<temp3->data<<ends;
		temp3=temp3->next;
	}
}
int ins_s(int *data){
	int pos, count=0;
	cout<<"Enter position: ";
	cin>>pos;
	structure *temp1=head, *p=head;
	while(p!=NULL){
		++count;
		p=p->next;
	}
	if(pos>count){
		cout<<"Envalid position..."<<endl;
		return 0;
	}else{
		while(pos--){
			if(pos==0){
				newnode=new structure;
				cout<<"Enter data for insert on S_position: ";
				cin>>newnode->data;
				break;
			}else{
				p=temp1;
				temp1=temp1->next;
			}
		}
	}
		newnode->next=temp1;
		newnode->pre=temp1->pre;
		p->next=newnode;
		temp->pre=newnode;
		cout<<"Data inserted on S_position..."<<endl;
		++(*data);
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
	temp1->next->pre=p;
	cout<<"Data Deleted from S_position..."<<endl;
}
int main(){
	int data=0;
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
			case 1: insert_f(&data); break;
			case 2: del_f(&data); break;
			case 3: insert_b(&data); break;
			case 4: del_b(&data); break;
			case 5: ins_s(&data); break;
			case 6: del_s(); break;
			case 7: display(&data); break;
			default: cout<<"Envalid try again...";
			case 8: cout<<"Exit...";
		}
		if(choice==8){
			break;
		}
	}
}
