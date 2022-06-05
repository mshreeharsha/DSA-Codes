
/*
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
*/

//Insertion of node at end nth position
#include <iostream>
using namespace std;

struct Node{
     int data;
     Node * next;
};

Node * head =NULL;

void Insert(int x,int n){
    Node * temp = new Node();
    temp->data=x;
    temp->next=NULL;
    if(n==1){
        temp->next=head;
        head=temp;
        return; //Very Very Important - To exit the Function
    }
    Node * temp1=head;
    for(int i=0;i<n-2;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
 }

 void Print(){
     Node * temp1 = head;
     cout<<"The List is : ";
     while(temp1!=NULL){
         cout<<temp1->data<<" ";
         temp1=temp1->next;
     }
    cout<<'\n';
 }

 int main(){
     Insert(5,1);
     Insert(7,2);
     Insert(10,3);
     Insert(2,4);
     Insert(6,5);
     int X,N;
     for(int i=0;i<2;i++){
         cout<<"Enter the element to be inserted and its position : ";
         cin>>X>>N;
         Insert(X,N);
         Print();
     }


 }