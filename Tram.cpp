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

int stat[1006][2];

int main()
{
    int N;   
    scanf("%d", &N);
    int a = 0;
    int ans = -1;
    for (int i=1 ; i<=N ; i++)
    {
        scanf("%d %d", &stat[i][0], &stat[i][1]);
        a = a - stat[i][0];
        ans = MAX(ans, a);
        a = a + stat[i][1];    
        ans = MAX(ans, a);
    }
    
    printf("%d\n", ans); 
    return 0;
}
