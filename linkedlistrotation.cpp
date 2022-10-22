#include <iostream> 
using namespace std;
class Node{
public:
int d;
  Node* next;
  Node(int d) {
this->d=d;
next=NULL; }
~Node() {
  
 int val=this->d; if(next!=NULL)
{
delete next;
next=NULL; }
cout<<"memory freed for "<<val<<endl; }
};
void insertathead(Node* &head,Node* & tail,int d1) {
Node* temp=new Node(d1); 
  temp->next=head;
  head=temp;
do{
temp=temp->next; 
}
  while(temp->next->d!=d1); 
  tail=temp;
delete temp->next; 
  tail->next=NULL;
}
void insertattail(Node* &tail,Node* & head,int d){
if(tail==NULL) {
Node* temp=new Node(d); 
  temp->next=NULL; 
  head=temp;

 tail=temp; 
}
else
{
Node* temp=new Node(d); 
  temp->next=NULL; 
  tail->next=temp;
  tail=temp;
} 
}
void print(Node* &head) {
Node*temp=head;
  while(temp!=NULL) {
        cout<<temp->d<<endl;
temp=temp->next;
  }
}
int main() {
Node* head=NULL;
Node* tail=head;
int n;
cout<<"enter the number of nodes"<<endl; 
  cin>>n;
for(int i=0;i<n;i++) {

insertattail(tail,head,i); }
print(head);
cout<<"moving last element"<<endl; 
  if(head!=NULL) 
    insertathead(head,tail,tail->d);
  print(head);
}
