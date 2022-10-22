#include <iostream>
using namespace std;
//recursive code
int gcd( int m,  int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}
int lcm(int m, int n)
{
    return (m / gcd(m, n)) * n;
}
  
 int main(void)
{
    cout <<"LCM of " << m << " and "<< n << " is " << lcm(m,
n);
return 0; }
