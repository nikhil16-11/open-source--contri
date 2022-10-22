#include<iostream>
#include<cmath>
using namespace std;
int recsum(int m,int p)
{
if(m==1) {
return 1; 
}
int m,n;
cout<<"enter the numbers"<<endl;
cin>>m>>n;
 else{
return ((pow(m,m))+recsum(m-1,p-1));
}
}
int main(void)
{
    int m,p;
    cout<<"enter thenumber"<<endl;
    cin>>m;
    cout<<"the sumis="<<recsum(m,m);
}
