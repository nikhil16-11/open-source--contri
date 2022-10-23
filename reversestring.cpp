#include<iostream>
using namespace std;
class Stack{
public:
    int size;
    char top;
    char* arr;
    Stack(int size)
    {
        this->size=size;
        arr=new char(size);
        top=-1;
}
    void push(char d)
    {
        if(size-top>1)
        {

 


top++;
        arr[top]=d;
    }
else
}
cout<<"stack overflow"<<endl;
 void pop() {
if(top>=0) {
top--; }
else
}
cout<<"stack underflow"<<endl;
char peek() {
if(top>=0) {
        return arr[top];
    }
else
{
return -1; }
}
cout<<"stack is empty"<<endl;


    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
            return false;
}
};
int main(void)
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    Stack s(n);
    string str;
    cout<<"enter an string"<<endl;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        s.push(str[i]);
    }
    cout<<"After sorting"<<endl;
    while(!s.isEmpty())
    {
cout<<s.peek();



s.pop(); }
}
