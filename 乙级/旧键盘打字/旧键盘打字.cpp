#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int hashtable[150] = {};
    int i, j;
    char s1[100010], s2[100010], c;
    gets(s1);
    gets(s2);
    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    for(i = 0; i < len1; i++)
    {
        c = s1[i];
        hashtable[c] = 1;
    }
    for(i = 0; i < len2; i++)
    {
        c = s2[i];
        if(hashtable['+'] == 1 && c >= 'A' && c <= 'Z')
            continue;
        if(hashtable[c] == 1)
            continue;
        if(c >= 'a' && c <= 'z' && hashtable[c + 'A' - 'a'] == 1)
            continue;
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
