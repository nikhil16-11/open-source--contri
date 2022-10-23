#include<iostream>
using namespace std;
 

struct fandi{
    string nm;
    int fanqu;
};
void countsort(fandi p[],int n) {

fandi oparr[n];
int cnt[n];
for(int i=0;i<n;i++)
{
cnt[i]=0; 
}
for(int i=0;i<n;i++)
{
    ++cnt[p[i].fanqu];
}
for(int i=1;i<n;i++)
{
    cnt[i]=cnt[i]+cnt[i-1];
}
for(int i=0;i<n;i++)
{ int m=(--cnt[p[i].fanqu]);
     oparr[m].fanqu=p[i].fanqu;
    //oparr[m].nm=p[i].nm;
}
for(int i=0;i<n;i++){
p[i].fanqu=oparr[i].fanqu;


//p[i].nm=oparr[i].nm;
}
}
int main(void)
{
    int t;
    cout<<"enter the number of fans"<<endl;
    cin>>t;
    fandi p[t];
    for(int i=0;i<t;i++)
    {
        cout<<"enter the name and fan quotient"<<endl;
        cin>>p[i].nm>>p[i].fanqu;
    }
    // countsort(p,t);
    for(int i=0;i<t;i++)
    {
        cout<<"the sorted name and fan quotient"<<p[i].nm<<"& "<<p[i].fanqu<<endl;
}
}
