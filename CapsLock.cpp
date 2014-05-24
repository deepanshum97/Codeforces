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

char word[103];

bool allUpper()
{
    for (int i=0 ; word[i] ; i++)
        if (word[i]>='a' && word[i]<='z')
            return false;
    
    return true;
}

bool caps()
{
    if (word[0] >= 'a' && word[0] <= 'z')
    {
        for (int i=1 ; word[i] ; i++)
           if (word[i]>='a' && word[i]<='z')
               return false;
               
        return true;
    }     
    
    return false;
}

int main()
{
    scanf("%s", word);
    if (allUpper() || caps())
    {
        for (int i=0 ; word[i] ; i++)
            printf("%c", word[i]^' ');                           
    }
    else
        printf("%s\n", word);
            
    return 0;        
}
