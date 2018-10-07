#include <iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int d[17]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char c[12]="10X98765432";
bool valid(char s[18])
{
    int sum=0;
    for(int i=0; i<=16; i++)
    {
        if(s[i]<'0'||s[i]>'9')
        {
            return false;
            break;
        }
            sum+=(s[i]-'0')*d[i];
    }
    sum%=11;
    if(c[sum]==s[17])
        return true;
    else
        return false;
}
int main()
{
    char s[18];
    int n;
    cin>>n;
    int m=n;
    getchar();
    int cnt=0;
    while(n--)
    {
        cin>>s;
        if(valid(s))
            cnt++;
        else
            printf("%s\n",s);
    }
    if(cnt==m)
        printf("All passed\n");
    return 0;
}
