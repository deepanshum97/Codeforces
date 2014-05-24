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

char str1[200], str2[200];

int main()
{
    scanf("%s", str1);
    scanf("%s", str2);
    
    for (int i=0 ; str1[i] ; i++)
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i]^' ';
            
    for (int i=0 ; str2[i] ; i++)
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            str2[i] = str2[i]^' ';
    
    int l = strcmp(str1, str2);
    printf("%d\n", l);                 
    return 0;    
}
