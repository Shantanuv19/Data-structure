#include<iostream>
#define MAX 100
using namespace std;
int size, front=-1, rear=-1, Queue[MAX];
void enque(){
	if(rear == size-1){
		cout<<"Queue Overflow...";
	}else{
		cout<<"Eneter Value For push: ";
		rear+=1;
		cin>>Queue[rear];
	}
}
void deque(){
    if(front==rear){
        cout<<"Queue Unterflow...";
    }else{
        ++front;
        cout<<"deque completed...";
        if(front==rear){
            front=-1;
            rear=-1;
        }
    }
}
void display(){
    if(front==rear){
        cout<<"Queue empty...";
    }else{
        for(int a=front+1; a<=rear; a++)
            cout<<Queue[a]<<ends;
    }
}
int main(){
	cout<<"Enter size: ";
	cin>>size;
	while(1){
		int val;
		cout<<"1> Enqueue"<<endl;
		cout<<"2> Dequeue"<<endl;
		cout<<"3> Display"<<endl;
		cout<<"4> Exit...";
		cout<<"\tEner your choice: ";
		int choice;
		cin>>choice;
		switch(choice){
			case 1: enque(); break;
			case 2: deque(); break;
			case 3: display(); break;
			case 4: cout<<"Exit...";break;
		}
		if(choice==4){
			break;
		}
	}
}
