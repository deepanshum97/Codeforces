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

int N;
int taxi[5];

int main()
{
    scanf("%d", &N);
    for (int i=0 ; i<N ; i++)
    {
        int c;
        scanf("%d", &c);
        taxi[c]++;    
    }
    
    int ans = taxi[4];
    int c = MIN(taxi[1], taxi[3]);
    ans += c;
    taxi[1] -= c;
    taxi[3] -= c;
    
    if (taxi[3] == 0)
    {
        // 1 or 2 left
        if (taxi[2] % 2 == 0)
        {
            ans += taxi[2] / 2;
            
            if (taxi[1] % 4 == 0)
                ans += taxi[1] / 4;
            else
                ans += taxi[1]/4 + 1;            
        }            
        else
        {
            ans += taxi[2]/2 + 1;
            taxi[1] -= 2;
            if (taxi[1] > 0)
            {
                if (taxi[1] % 4 == 0)
                    ans += taxi[1] / 4;
                else
                    ans += taxi[1]/4 + 1;
            }
        }
    }
    else
    {
        // 3 ans 2 left
        ans += taxi[3];
        ans += taxi[2]/2 + taxi[2]%2;    
    }
        
    printf("%d\n", ans);
    // scanf("%d", &N);    
    return 0;    
}
