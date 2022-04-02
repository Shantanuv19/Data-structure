#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node {
   int data;
   struct Node *prev;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   int size, a, b, c, arr[100];
   cout<<"Enter the size of the arr:- ";
   cin>>size;
   for(a=0; a<size; a++)
   {
   		cin>>arr[a];
   		insert(arr[a]);
   }
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}
