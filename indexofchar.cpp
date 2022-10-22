#include<iostream> #include<cstring> 
//#include<bits/stdc++.h> 
using namespace std;
int linearSearch(string arr[],int s,string str)
{ char temp[]="";
    for(int i=0;i<s;i++)
    { stpcpy(temp,arr[i]);
        if(strcmp(temp,str)==0)
            return i;
        else
            continue;
}
}
int main(void)
{
    int n;
    string str;
 

    cout<<"enter the size of the array"<<endl;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i+1<<"element of thearray"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the string to be searched"<<endl;
    cin>>str;
    cout<<"string present at="<<linearSearch(arr,n,str)<<endl;
}
