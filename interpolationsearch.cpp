#include<iostream>
using namespace std;
int interpolationSearch(int arr[], int n, int x)
 

{
int lo = 0, hi = (n - 1);
while (lo <= hi && x >= arr[lo] && x <= arr[hi])
{
if (lo == hi) {
        if (arr[lo] == x) return lo;
return -1; }
    int pos = lo + (((double)(hi - lo) /(arr[hi] - arr[lo]))* (x - arr[lo]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            lo = pos + 1;
else
}
return -1; }
hi = pos - 1;


int main() {
    int l;
    cout<<"enter the sizer of the array"<<endl;
    cin>>l;
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    int arr[l];
    for(int i=0;i<l;i++)
    {
        cout<<"enter the "<<i+1<<" element of thearray"<<endl;
        cin>>arr[i];
    }
    int index = interpolationSearch(arr, l, k);
    if (index != -1)
        cout << "Element found at index " << index;
else
        cout << "Element not found.";
    return 0;
}
