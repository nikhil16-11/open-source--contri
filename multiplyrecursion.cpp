#include<iostream>
using namespace std;
int recmul(int m,int n,int a,int b)
{
    if(a==m&&b==n)
    {
return 1;
    }
    if(m>0){
        if(a==m)
{
}
      else{
a++;
}
} 
  if(m<0){
if(a==m) {
   a=m;
 9921103210
F2 AARADHYA BANSAL
a=m;
} 
    else{
a--;
}
} 
  if(n>0)
  {
if(b==n) {
b=n;
}
    else{
b++;
}} 
  if(n<0){
if(b==n) {
b=n;
} 
    else{
b--;
    }}
int mi=recmul(m,n,a,b);
if(mi==1)
{
return m*n; }

 }
int main(void)
{
    int m,n;
    cout<<"enter the numbers"<<endl;
    cin>>m>>n;
    cout<<"the multiplication is="<<recmul(m,n,0,0)<<endl;
}
