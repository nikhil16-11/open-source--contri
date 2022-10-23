#include<iostream>
using namespace std;
void uniques(string s,int l,int r)
{
if(l==r) {
        cout<<s<<endl;
    }
    else{
        for (int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            uniques(s,l+1,r);
            swap(s[l],s[i]);
}
}
}
int main(void)
{
    string s;
cout<<"enter a string "<<endl;
    cin>>s;
    int l=s.size();
    uniques(s,0,l-1);
}
