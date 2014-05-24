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

int N;
vector<int> num;
char l[100];

int main()
{
    scanf("%d", &N);
    scanf("%s", l);
    
    if (N == 1)
    {
        printf("0\n");
        return 0;
    }
    
    int c = 0;
    char start = l[0];
    while (l[c])
    {
        int count = 0;
        while (l[c] && (l[c] == start))
        {
            count++;
            c++;
        }            
        if (l[c]) 
        {
           start = l[c];
           num.pb(count);
        }
        else
        {
           num.pb(count);
           break;     
        } 
    }
    
    int ans = 0;
    for (int i=0 ; i<num.size() ; i++)
    {
        if (num[i] > 1)
            ans = ans + num[i] - 1;    
    }
    
    printf("%d\n", ans);
    return 0;   
}
