#include<iostream>
using namespace std;
void countcheck(int arr[],int n)
{ int i,j;
    int count[n+1];
    for( i=0;i<=n;i++)
    {
        count[i]=0;
    }
    for( i=0;i<=n;i++)
    {
        for( j=0;j<=n;j++)
        {
            if(arr[i]==(j+1))
            {
                count[arr[i]]=++count[arr[i]];
            }
}
   }

    for(i=0;i<=n;i++)
    {   if(i==0)
        continue;
        if(count[i]>1)
        {
            cout<<"repeating element is="<<i<<" repeating="<<count[i]<<" times"<<endl;
        }
        if(count[i]==0)
        {
            cout<<"the missingelement is="<<i<<endl;
}
}
}
int main(void)
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the"<<i+1<<"element"<<endl;
        cin>>arr[i];
    }

 

    countcheck(arr,n);
}
