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

char word[200];

bool isVowel(char c)
{
    if (c=='a' || c=='A' || c=='e' || c=='E' ||c=='i' || c=='I' ||c=='o' || c=='O' ||c=='u' || c=='U' || c=='y' || c=='Y')
        return true;
        
    return false;     
}

int main()
{
    scanf("%s", word);
    for (int i=0 ; word[i] ; i++)
    {
        if (!isVowel(word[i]))
        {
            if (word[i]>='A' && word[i]<='Z')
                printf(".%c", word[i]^' ');
            else
                printf(".%c", word[i]);                      
        }   
    }

    return 0;    
}
