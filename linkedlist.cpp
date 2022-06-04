//Inserstion of Node at the Begining - Linked List
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
};

Node * head;

void Insert(int x){
    Node * temp =new Node();
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL){    // Implies List is not Empty
        temp->next=head;
    }
    head=temp;
}

void Print(){
    Node * temp1 =head; //Using temp1 so as not to modify head
    cout<<"The List is : ";
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<'\n';
}

int main(){
    head=NULL;
    int n,x;
    cout<<"Enter the Number of Elements in the list : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element "<< i+1 <<" : ";
        cin>>x;
        Insert(x);
        Print();
    }
}