#include<iostream>
using namespace std;
int binarySearch(int arr[],int s,int d)
{ int lo,mid,hi;
lo=0;
cout<<"element is not present in the array"<<endl;
    hi=s-1;
    int cnt=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(d==arr[mid])
        {
            cnt++;
            return mid;
        }
        else if(d>arr[mid])
        {
lo=mid+1; }
else //if( d<arr[mid]) {
hi=mid-1; }
}
    if(cnt==0)
        return -1;
}
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
    int b=binarySearch(arr,n,a);
    if(b==-1)
{
      cout<<"element is not present in the array"<<endl;
}
else
        cout<<"element is present at the"<<b+1<<"position"<<endl;
}
