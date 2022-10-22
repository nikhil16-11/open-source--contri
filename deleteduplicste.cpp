#include <iostream> 
#include<cstdlib> 
using namespace std; 
class Node{
public:
    int d;
Node* next; Node(int d) {
this->d=d;
next=NULL; }
~Node() {
int val=this->d; if(next!=NULL)
  
 {
delete next;
next=NULL; }
cout<<"memory freed for "<<val<<endl; }
};
void insertattail(Node* &tail,Node* &head,int d){
if(tail==NULL) {
Node* temp=new Node(d); temp->next=NULL; head=temp;
tail=temp;
} else{
Node* temp=new Node(d); temp->next=NULL; tail->next=temp; tail=temp;
} }
void print(Node* &head) {
Node*temp=head; while(temp!=NULL)

 {
        cout<<temp->d<<endl;
temp=temp->next; }
}
void removedupli(Node* &tail) {
    Node* temp1=tail;
 Node* temp2;
if(tail==NULL) {
        cout<<"empty list"<<endl;
return; }
while(temp1->next!=NULL)
{ temp2=temp1;
Node* prev=temp2;
Node* curr=prev->next; 
 while(curr!=NULL)
{
if(temp1->d==curr->d) {
                prev->next=curr->next;
Node* dp=curr;
  dp->next=NULL;
  delete dp;

 dp=NULL;
curr=prev->next; 
}
else
{ prev=curr;
 
curr=curr->next;} 
}
temp1=temp1->next; 
                        }
}
int main() {
  
Node* tail1=NULL;
  Node* head=NULL;
int d; while(1) {
  
cout << "enter the data" << endl;
cin >> d;
insertattail(tail1, head, d);
cout << "do you wish to exit?? press 1" << endl;
  int a = 0;
cin >> a; 
  if (a == 1)
break;

}
cout<<head->d<<" "<<tail1->d; 
  removedupli(head);
print(head); 
}
