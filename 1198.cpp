#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define MOD             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int main()
{
    int tst;
    cin>>tst;
    for(int t=1; t<=tst; t++)
    {
        int n;
        cin>>n;
        int arr[n+2];
        int arr1[n+2];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        int x=-1,y=-1,cnt=0;
        sort(arr,arr+n);
        sort(arr1,arr1+n);
        for(int i=n-1; i>=0; i--)
        {
            x=-1;
            y=-1;
           for(int j=0;j<n;j++)
           {
               if(arr[j]>arr1[i] && arr[j]!=-1 && arr1[i]!=-1)
               {
                   cnt+=2;
                   arr[j]=arr1[i]=-1;
               }
           }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i]!=-1 && arr1[j]!=-1 && arr[i]==arr1[j])
                {
                    cnt+=1;
                }
            }
        }
        pf("Case %d: %d\n",t,cnt);

    }
}
