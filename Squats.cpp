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
char pos[MaxN];

int main()
{
    int N;
    scanf("%d %s", &N, pos);
    vector<int> x, X;
    for (int i=0 ; i<N ; i++)
    {
        if (pos[i] == 'x')
            x.pb(i);
        else
            X.pb(i);    
    }
    
    int c = x.size() - X.size();
    if (c > 0)
    {
        for (int i=0 ; i<c/2 ; i++)
           pos[x[i]] = 'X';      
    }
    else if (c < 0)
    {
        for (int i=0 ; i<-c/2 ; i++)
           pos[X[i]] = 'x';
    }
    else
    {
        
    }
        
    printf("%d\n", ABS(c/2));   
    printf("%s\n", pos);            
    
    return 0;    
}
