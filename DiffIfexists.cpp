#include<iostream>
#include<cmath>
using namespace std;
void pairs(int arr[],int n,int x)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { if(c==0){
                if(abs(arr[i]-arr[j])==x){
                    c++;
  cout<<"pairs="<<arr[i]<<","<<arr[j]<<endl;}
            }}
}
}
int main(void)
{

    int n,x;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the"<<i+1<<"element"<<endl;
        cin>>arr[i];
    }
    pairs(arr,n,x);
}
