
#include<iostream>
using namespace std;
int linearSearch(int arr[],int s,int d)
{ int a;
    for(int i=0;i<s;i++)
    {
        if(d=arr[i])
            a=i;
        else
            return -1;
}
return a; }
int main(void)
{
    int n,a;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    

    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i+1<<"element of thearray"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the ele,emt to be searched"<<endl;
    cin>>a;
    int b=linearSearch(arr,n,a);
    if(b==-1)
{
      cout<<"element is not present in the array"<<endl;
}
else
        cout<<"element is present at the"<<b<<"position"<<endl;
}
