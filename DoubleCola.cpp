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

LL N;

int main()
{
    scanf("%I64d", &N);
    LL s = 5;
    LL sum = 5; 
    while (sum <= N)
    {
        s = s + s;
        sum = sum + s;
    }          
    
    LL c = s / 5;
    LL lo = sum - s;
    
    // Sheldon, Leonard, Penny, Rajesh and Howard
    
    if (N>lo && N<=lo+c)
        printf("Sheldon\n");     
    else if (N>lo+c && N<=lo+2*c)
        printf("Leonard\n"); 
    else if (N>lo+2*c && N<=lo+3*c)
        printf("Penny\n"); 
    else if (N>lo+3*c && N<=lo+4*c)
        printf("Rajesh\n");
    else
        printf("Howard\n");
        
    return 0;    
}
