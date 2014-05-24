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

int main()
{
    int k, l, m, n, d;
    scanf("%d", &k);    
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    
    int ans = 0;
    for (int i=1 ; i<=d ; i++)
    {
        if (i%k == 0 || i%l==0 || i%m==0 || i%n==0)
           ans++;         
    }
    
    printf("%d\n", ans);
    return 0;    
}
