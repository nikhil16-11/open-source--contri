#include<iostream>

using namespace std;

int counti(int arr[],int l)
{
    int cnt=0;
  
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
cnt++; 
            }
          
}
      
}
  
return cnt; 
  
}
  
int main(void)
{
    int l;
    cout<<"enter the sizer of the array"<<endl;
    cin>>l;
    int arr[l];
    for(int i=0;i<l;i++)
    {
        cout<<"enter the "<<i+1<<" element of thearray"<<endl;
        cin>>arr[i];
    }
    int cnt=counti(arr,l);
    cout<<"number of inversions=="<<cnt<<endl;
}
