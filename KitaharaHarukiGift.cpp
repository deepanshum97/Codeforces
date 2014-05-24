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
int apple[3];

int main()
{
    scanf("%d", &N);
    for (int i=1 ; i<=N ; i++)
    {
        int c;
        scanf("%d", &c);
        apple[c/100]++;       
    }      
    
    int a = apple[2] % 2;
    if (a == 0 && apple[1]%2 == 0)
    {
        printf("YES\n");      
    }
    else
    {
        if (apple[1]>=2 && apple[1]%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");        
    }

    return 0;
}
