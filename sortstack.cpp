#include<iostream>
using namespace std;
class Stack{
public:
    int size;
    int top;
    int* arr;
    Stack(int size)
    {
        this->size=size;
        arr=new int(size);
        top=-1;
}
    void push(int d)
    {
        if(size-top>1)
        {
top++;
            arr[top]=d;
        }
else
   cout<<"stack overflow"<<endl;

}
void pop() {
if(top>=0) {
top--; }
else
}
int peek() {
AARADHYA BANSAL
}
cout<<"stack underflow"<<endl;
 if(top>=0) {
    return arr[top];
}
else
{
return -1; }
bool isEmpty()
{
        if(top==-1)
        {
cout<<"stack is empty"<<endl;
return true;



}
}
else
    return false;
};
void sortedInsert(Stack &s,int n)
{
    if(s.isEmpty()||(!s.isEmpty()&& s.peek()<n))
    {
s.push(n);
return; }
    int num=s.peek();
    s.pop();
    sortedInsert(s,n);
    s.push(num);
}
void sortStack(Stack &s)
{
    if(s.isEmpty())
    {
return; }
    int num=s.peek();
    s.pop();
    sortStack(s);


    sortedInsert(s,num);
}
int main(void)
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    Stack s(n);
    for(int i=0;i<n;i++)
    { int a=0;
        cout<<"enter an element"<<endl;
        cin>>a;
        s.push(a);
}
    sortStack(s);
    cout<<"After sorting"<<endl;
    while(!s.isEmpty())
    {
        cout<<s.peek()<<endl;
s.pop(); }
}
