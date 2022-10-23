#include<iostream>
using namespace std;
struct pp{
    int pet;
int dist; };
int petroltour(pp p[],int n)
{
    int bal=0;
    int def=0;
    int start=0;
    for(int i=0;i<n;i++)
    {
        bal+=p[i].pet-p[i].dist;
   
if(bal<0) {
            start=i+1;
            def+=bal;
            bal=0;
}
}
    if(def+bal>=0)
    {
        return start;
    }
    else
        return -1;
}
int main(void)
{
    int t;
    cout<<"enter the number of petrol pumps"<<endl;
    cin>>t;
    pp p[t];
    for(int i=0;i<t;i++)
    {
        cout<<"enter the petrol data and distance"<<endl;
        cin>>p[i].pet>>p[i].dist;
    }
    cout<<"the start position is=="<<petroltour(p,t)<<endl;
}
