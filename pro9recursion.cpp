#include<bits/stdc++.h>
using  namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}


int main()
{
    int a,b,n;
    cin>>a>>b;
    n = gcd(a,b);
    cout<<n;
}
