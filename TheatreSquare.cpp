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

LL N, M, a;

int main()
{
    scanf("%I64d %I64d %I64d", &N, &M, &a);
    LL l = 0, b = 0;
    if (N%a == 0)
        l = N/a;
    else
        l = N/a + 1;
        
    if (M%a == 0)
        b = M/a;
    else
        b = M/a + 1;
        
    printf("%I64d\n", l*b);        
    return 0;    
}
