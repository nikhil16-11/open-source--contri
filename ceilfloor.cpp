#include<iostream>
using namespace std;
void ceilfloor(int arr[],int n,int x)
{
    int maxnum=arr[x];
    int minnum=arr[x];
    int i, k =0,cnt=0;
    for(i=x;i<n;i++)
    {
        if(arr[i]>maxnum)
        {
            maxnum=arr[i];
        }
        if(arr[i]<minnum)
        {
            minnum=arr[i];
        }
}
if(x==0)
  

        cout<<"floor does not exist"<<endl;
    else
        cout<<"floor="<<minnum<<endl;
    if(x==n-1)
        cout<<"ceil does not exist"<<endl;
    else
        cout<<"ceil="<<maxnum<<endl;
}
int main(void)
{
    int n,x;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    cout<<"enter the start point"<<endl;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the"<<i+1<<"element"<<endl;
        cin>>arr[i];
    }
    ceilfloor(arr,n,x);
}
