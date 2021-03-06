#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

#define size 100000100
long long a[size / 64 + 100];
unsigned prime[5761558];
unsigned int dp[5761558];

int cnt;

int sieve_with_bit_masking()
{


	for (long long i = 3; i <= sqrt(size); i += 2) {
		if(!(a[i/64]&(1LL<<(i%64)))) {
			for(long long j = i * i; j <= size; j += 2 * i) {
				a[j/64] |= (1LL<<(j%64));
			}
		}
	}

	prime[cnt++] = 2;
	for (long long i = 3; i <= size; i += 2) {
		if(!(a[i / 64] & (1LL << (i % 64)))) {
			prime[cnt++] = i;
		}

	}

	return 0;


}

unsigned find_product(int x)
{
	unsigned ans;
	unsigned temp;
	ans = 1;
	for (int i = 0; prime[i] * prime[i] <= x; i++ ) {
		temp = x;
		temp = temp / prime[i];
		while(temp >= prime[i]) {
			temp = temp / prime[i];
			ans = ans * prime[i];
		}

	}

	return ans;
}

int main()
{
    sieve_with_bit_masking();
    int n;
    int ans;
    cin>>n;
    ans = find_product(n);
    cout<<ans<<endl;
}
