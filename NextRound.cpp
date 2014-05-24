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

int N, K;
int score[100];

int main()
{
    scanf("%d %d", &N, &K);
    int ans = 0;
    for (int i=1 ; i<=N ; i++)
        scanf("%d", &score[i]); 
    
    for (int i=1 ; i<=N ; i++)
        if (score[i]>0 && score[i] >= score[K])
            ans++;
    printf("%d\n", ans);
    return 0;    
}
