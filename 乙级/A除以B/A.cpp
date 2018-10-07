#include<stdio.h>
#include<string.h>
int main()
{
    char A[1001]={},Q[1001]={};
    int B=0,R=0,i=0,j=1;
    scanf("%s %d",A,&B);
    while(A[i]!=0)
    {
        Q[i]=(R*10+A[i]-'0')/B;
        R=(R*10+A[i]-'0')%B;
        i++;
    }
    if(Q[0]!=0)
    {
        printf("%d",Q[0]);
    }else
    {
        if(Q[1]==0)
        {
            printf("0");
        }
    }
    for(j=1;j<strlen(A);j++)
    {
        printf("%d",Q[j]);
    }

    printf(" %d",R);
    return 0;
}
