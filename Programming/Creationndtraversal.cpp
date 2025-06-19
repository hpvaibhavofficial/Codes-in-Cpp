#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
int main(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    struct Node *head =NULL;
    struct Node *newnode;
    struct Node *temp;
    while (n)
    {
        newnode =(struct Node *)malloc(sizeof(struct Node));
        cout<<"Enter Data: ";
        cin>>newnode->data;
        newnode->next =NULL;
        if(head==NULL){
            head=temp=newnode;
        } else{
            temp->next=newnode;
            temp=newnode;
        }
        n--;    
    }
    //TRAVERSAL OF LINKED LIST
    temp = head;
    cout<<"Elements in Linked List is : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}