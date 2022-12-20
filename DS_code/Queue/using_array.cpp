//queue
#include<iostream>
using namespace std;
void enque(int *Queue, int *rear, int size){
	if(*rear == size-1){
		cout<<"Queue Overflow...";
	}else{
	    int x;
		cout<<"Eneter Value For push: ";
		cin>>x;
		*rear+=1;
		*(Queue+*rear)=x;
	}
}
void deque(int *front, int *rear){
    if(*front==*rear){
        cout<<"Queue Unterflow...";
    }else{
        ++*front;
        cout<<"deque completed...";
        if(*front==*rear){
            *front=-1;
            *rear=-1;
        }
    }
}
void display(int *Queue, int *front,int *rear){
    if(*front==*rear){
        cout<<"Queue empty...";
    }else{
        for(int a=*front+1; a<=*rear; a++)
            cout<<*(Queue+ a)<<ends;
    }
}
int main(){
	int size, front=-1, rear=-1;
	cout<<"Enter size: ";
	cin>>size;
	int Queue[size];
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
			case 1: enque(Queue,&rear, size); break;
			case 2: deque(&front, &rear); break;
			case 3: display(Queue, &front, &rear); break;
			case 4: cout<<"Exit...";
		}
		if(val==4){
			break;
		}
	}
}
