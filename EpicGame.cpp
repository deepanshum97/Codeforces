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

int a, b, n;
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    
    return gcd(y, x%y);    
}

int main()
{
    scanf("%d %d %d", &a, &b, &n);
    while(1)
    {
        int c = gcd(MAX(n, a), MIN(n, a));
        if (n >= c)
            n -= c;
        else
        {
            printf("1\n");
            return 0;
        }
        
        c = gcd(MAX(n, b), MIN(n, b));
        if (n >= c)
            n -= c;
        else
        {
            printf("0\n");
            return 0;
        }     
    }
    return 0;    
}
