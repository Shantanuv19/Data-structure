#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
   struct Node *ptr = head;
   newnode->data = newdata;
   newnode->next = head;
   if (head!= NULL) {
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } else
   newnode->next = newnode;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main() {
   int arr[100], size, a, b, c;
   cout<<"Enter the size of the arr:- ";
   cin>>size;
   for(a=0; a<size; a++)
   {
   		cin>>arr[a];
   		insert(arr[a]);
   }
   cout<<"The circular linked list is: ";
   display();
   return 0;
}
