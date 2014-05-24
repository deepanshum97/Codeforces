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

int N, M;
vector<int> adj[MaxN];
LL ans;

int main()
{
    int c;
    vector<int> num;
    scanf("%d %d", &N, &M);
    
    if (M <= 2)
    {
        printf("%d\n", 0);
        return 0;      
    }
       
    for (int i=0 ; i<M ; i++)
    {
        scanf("%d", &c);
        num.pb(c);
    }
    
    for (int i=0 ; i<M-1 ; i++)
    {
        ans += (LL)ABS(num[i] - num[i+1]);
    }
    
    for (int i=0 ; i<num.size() ; i++)
    {
        if (i==0)
        {
            if (num[i] != num[i+1])     
                adj[num[i]].pb(num[i+1]);
        }
        else if (i == num.sz - 1)
        {
            if (num[i] != num[i-1]) 
                adj[num[i]].pb(num[i-1]);
        }
        else
        {
            if (num[i] != num[i-1])
                adj[num[i]].pb(num[i-1]);
                
            if (num[i] != num[i+1])
                adj[num[i]].pb(num[i+1]);    
        }                  
    }
    
    LL m = 0;
    for (int i=1 ; i<=N ; i++)
    {
        if (adj[i].sz > 0)
        {
            sort(adj[i].begin(), adj[i].end());
            int med = adj[i][adj[i].sz / 2];
            LL cost = 0;
            LL benefit = 0;
            for (int j=0 ; j<adj[i].sz ; j++)
            {
                cost += (LL)ABS(adj[i][j] - i);
                benefit += (LL)ABS(adj[i][j] - med);    
            }             
            
            m = MIN( m, (benefit - cost));
        }     
    }        
    
    printf("%I64d\n", ans + m);
    return 0;    
}
