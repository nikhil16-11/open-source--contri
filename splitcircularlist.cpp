#include <iostream>
using namespace std;
class Node{ public:
int d;
Node* next; 
Node(int d){
this->d=d;
next=NULL; }
 ~Node()
 {
int val=this->d;
   if(this->next!=NULL) {
delete next;
next=NULL; 
   }
cout<<"memory freed with d="<<val<<endl; }
};
void addNode(Node* & tail,int element,int d)
{
if (tail == NULL) {
Node *temp = new Node(d); 
  tail = temp;
temp->next = temp;
return; } else {
Node *curr = tail;
while (curr->d != element) {
curr = curr->next; }
Node *temp = new Node(d);
  temp->next = curr->next; 
  curr->next = temp;
 }

 }
int print(Node* tail) { int cnt=0;
Node* temp=tail; 
 do{ cnt++;
        cout<<temp->d;
temp=temp->next;
   }while(temp->d !=tail->d);
cout<<endl;
return cnt;
}
void deleteNode(Node* &tail,int val) {
if(tail==NULL) {
        cout<<"empty list"<<endl;
return; }
else
{
Node* prev=tail;
Node* curr=prev->next;
  while(curr->d!=val) {
prev = curr;
curr = curr->next; }
prev->next=curr->next;

 }
}
if(curr==prev) {
tail=NULL; }
else if(tail==curr) {
tail=prev;
}
curr->next=NULL; delete curr;
void splitList(Node* &tail1,Node* &tail2,int d) { int cnt=1;
int a=d/2;
Node* temp=tail1; while(cnt!=a) {
        temp = temp->next;
cnt++; }
Node* tailAdd=temp->next; 
temp->next=tail1; 
tail2=tailAdd;
temp=tail2;
while(temp->next->d!=tail1->d)

 {
temp=temp->next; }
temp->next=tail2; }
int main(void) {
Node *tail = NULL;
 Node* tail1=NULL;
addNode(tail, 5, 3); print(tail);
addNode(tail, 3, 5); print(tail);
addNode(tail, 5, 7); print(tail);
addNode(tail, 7, 9); print(tail);
addNode(tail, 5, 6); print(tail);

addNode(tail, 9, 10); print(tail);
addNode(tail, 3, 4);
int a=print(tail);
  splitList(tail,tail1, a); 
  print(tail); 
  print(tail1);
}
