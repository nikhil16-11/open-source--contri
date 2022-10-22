#include <iostream>
using namespace std;
class Node{ public:
int d;
Node* next; Node(int d){
this->d=d;
 
 next=NULL; }
~Node() {
int val=this->d; if(this->next!=NULL) {
delete next;
next=NULL; }
        cout<<"memory freed with
d="<<val<<endl;
} };
void addNode(Node* & tail,int element,int d) {
if (tail == NULL) {
Node *temp = new Node(d); tail = temp;
temp->next = temp;
return; } else {
Node *curr = tail;
while (curr->d != element) {
curr = curr->next; }
 
 } }
Node *temp = new Node(d); temp->next = curr->next; curr->next = temp;
void print(Node* tail) {
Node* temp=tail; do{
        cout<<temp->d;
temp=temp->next; }while(temp->d !=tail->d); cout<<endl;
}
void deleteNode(Node* &tail,int val) {
if(tail==NULL) {
        cout<<"empty list"<<endl;
return; }
else
{
Node* prev=tail;
Node* curr=prev->next; while(curr->d!=val) {

 prev = curr;
curr = curr->next; }
prev->next=curr->next; if(curr==prev)
{
tail=NULL; }
else if(tail==curr) {
tail=prev;
}
curr->next=NULL; delete curr;
} }
int main(void) {
Node *tail1 = NULL;
addNode(tail1, 5, 3); print(tail1);

 addNode(tail1, 3, 5); print(tail1);
addNode(tail1, 5, 7); print(tail1);
addNode(tail1, 7, 9); print(tail1);
addNode(tail1, 5, 6); print(tail1);
addNode(tail1, 9, 10); print(tail1);
addNode(tail1, 3, 4); print(tail1);
Node *tail2= NULL;
addNode(tail2, 2,1); print(tail2);
addNode(tail2, 1,3); print(tail2);

 addNode(tail2, 3,4); print(tail2);
addNode(tail2, 4,5); print(tail2);
addNode(tail2, 5,6); print(tail2);
addNode(tail2, 6,7); print(tail2);
addNode(tail2, 7,24); print(tail2);
Node* tail1temp=tail1; do{
tail1temp=tail1temp->next; }while(tail1temp->next!=tail1);
int prev1=tail1temp->d; Node* temp=tail2; do{
addNode(tail1,prev1,temp->d); prev1=temp->d; temp=temp->next;
}while(temp!=tail2);

print(tail1); }
