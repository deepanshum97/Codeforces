#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <memory.h>
#include <stdio.h>
#include <ctime>
#include <list>
#include <cassert>
 
using namespace std;
 
#define LL long long
#define U unsigned
#define pnt pair<int,int>
#define FOR(i,a,b) for (int i=(a); i<(b); ++i)
#define MEMS(a,b) memset((a),(b),sizeof(a))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ABS(a) (((a)>=(0))?(a):(-(a)))
#define mp make_pair
#define pb push_back
#define ALL(a) a.begin(),a.end()
#define FI(i,b) FOR(i,0,b)
#define V(t) vector < t >
#define root 0
#define sz size()
#define MaxN 100006

int N, Q;
LL dp[MaxN];
LL dp1[MaxN];

int main()
{
    vector<int> num;
    scanf("%d", &N);
    for (int i=1 ; i<=N ; i++)
    {
        int c;
        scanf("%d", &c);
        num.pb(c);    
    }
    
    for (int i=1 ; i<=N ; i++)
        dp[i] = dp[i-1] + (LL)num[i-1];
        
    sort(num.begin(), num.end());    
    for (int i=1 ; i<=N ; i++)
        dp1[i] = dp1[i-1] + (LL)num[i-1];
        
    scanf("%d", &Q);
    for (int i=1 ; i<=Q ; i++)
    {
        int t, l, r;
        scanf("%d %d %d", &t, &l, &r);
        if (t==1)
            printf("%I64d\n", dp[r] - dp[l-1]);    
        else
            printf("%I64d\n", dp1[r] - dp1[l-1]);
    }    
    return 0;    
}
