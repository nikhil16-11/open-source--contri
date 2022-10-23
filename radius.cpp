#include<iostream>
using namespace std;
int minRadius(int x[], int y[], int n)
{
int dis[n];
    for (int i = 0; i < n; i++)
        dis[i] = x[i] * x[i] + y[i] * y[i];
    sort(dis, dis + n);
    return dis[n - 1];
}
 
int main() {
  intn;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the"<<i+1<<"coordinate"<<endl;
        cin>>x[i]>>y[i];
    }
    cout << minRadius( x, y, n)<< endl;
return 0;
}
 
