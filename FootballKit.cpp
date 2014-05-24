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
#define MaxN 100100

int N;
int home[MaxN], away[MaxN];

int main()
{
    scanf("%d", &N);
    vector<pair<int, int> > play;
    for (int i=0 ; i<N ; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        home[a]++;
        away[b]++;
        play.pb(mp(a, b));
    }        
    
    for (int i=0 ; i<N ; i++)
    {
        int c = N - 1 + home[play[i].second];
        printf("%d %d\n", c, 2*N - 2 - c);    
    }
    return 0;    
}
