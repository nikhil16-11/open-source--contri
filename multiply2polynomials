#include <iostream> 
#include<cstdlib>
using namespace std; 
class Node{
public:
    int d;
int pow; Node* next; Node(int d) {
this->d=d; this->pow=pow; next=NULL;
} ~Node() {
int val=this->d; if(next!=NULL)
{
delete next;
 
 next=NULL; }
cout<<"memory freed for "<<val<<endl; }
};
void insertattail(Node* &tail,int d,int pow){
if(tail==NULL) {
Node* temp=new Node(d); temp->pow=pow; temp->next=NULL; tail=temp;
} else{
Node* temp=new Node(d); temp->next=NULL; temp->pow=pow; tail->next=temp; tail=temp;
} }
void print(Node* &head) {
Node*temp=head; while(temp->next!=NULL) {

 cout<<temp->d<<"x^"<<temp->pow<<endl; if(temp->next!=NULL&&temp->next->d>=0)
            cout<<"+";
        temp=temp->next;
}
cout<<temp->d<<"\n"; }
void addSamepow(Node* &tail3) { Node* temp1=tail3;
Node* temp2;
while(temp1->next!=NULL&&temp1!=NULL) {
temp2=temp1; while(temp2->next!=NULL){ if(temp1->pow==temp2->next->pow) {
          temp1->d=temp1->d+temp2->d;
          Node* extra=temp2->next;
          temp2->next=temp2->next->next;
            delete extra;
}
else
temp2=temp2->next; }
temp1=temp1->next; }

 }
Node* NodeMultiply(Node* &tail1,Node* &tail2,Node* &tail3){
Node* temp1=tail1; Node* temp2=tail2; while(temp1!=NULL) {
while(temp2!=NULL){ insertattail(tail3,(temp1->d)*(temp2->d),(temp1-
>pow)+(temp2->pow)); temp2=temp2->next;
}
        temp2=tail2;
temp1=temp1->next; }
addSamepow(tail3); return tail3;
}
int main() {
Node* tail1=NULL;

 Node* tail2=NULL;
int coef,power; while(1) {
       cout << "enter the coefficient and power from the
left" << endl;
cin >> coef >> power;
insertattail(tail1, coef, power);
cout << "do you wish to exit?? press 1" << endl; int a = 0;
cin >> a;
if (a == 1)
break;
}
while(1) {
        cout << "enter the coefficient and power from the
left" << endl;
cin >> coef >> power;
insertattail(tail2, coef, power);

cout << "do you wish to exit?? press 1" << endl; int a = 0;
cin >> a;

if (a == 1)
break;
}
Node* tail3=NULL; tail3=NodeMultiply(tail1,tail2,tail3);

print(tail3); 
}
