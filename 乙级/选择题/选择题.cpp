#include <stdio.h>  
#include <stdlib.h>  
  
#define MAX 110  
  
typedef struct problems  
{  
    int value;  
    int number;  
    char a[5];  
    int wrong;  
}PROBLEM;  
  
int grade[1100];  
PROBLEM problem[MAX];  
  
int main()  
{  
    int N, M;  
    int i, j, k;  
    int value, number, max;  
    char c;  
  
    //freopen("d:\\input.txt", "r", stdin);  
    scanf("%d%d", &N, &M);  
    for (i = 1; i <= M; i++)  
    {  
        scanf("%d %d", &value, &number);  
        scanf("%d", &number);  
        problem[i].value = value;  
        problem[i].number = number;  
        for (j = 0; j < problem[i].number; j++)  
        {  
            getchar();  
            c = getchar();  
            problem[i].a[j] = c;  
        }  
    }  
    for (i = 0; i < N; i++)  
    {  
        for (j = 1; j <= M; j++)  
        {  
            getchar(); //≥‘ø’∞◊∑˚  
            getchar();//≥‘◊Û¿®∫≈  
            scanf("%d", &number);  
            if (number != problem[j].number)  
            {  
                problem[j].wrong++;  
                while ((c = getchar()) != ')') {} //÷±µΩ≥‘µÙ”“¿®∫≈  
                continue;  
            }  
            else  
            {  
                for (k = 0; k < number; k++)  
                {  
                    getchar();  
                    c = getchar();  
                    if (c != problem[j].a[k])  
                    {  
                        problem[j].wrong++;  
                        while ((c = getchar()) != ')') {} //÷±µΩ≥‘µÙ”“¿®∫≈  
                        break;  
                    }  
                }  
                if (k >= number)  
                {  
                    getchar(); //≥‘”“¿®∫≈  
                    grade[i] += problem[j].value;  
                }  
            }  
        }  
    }  
    for (i = 0; i < N; i++)  
    {  
        printf("%d\n", grade[i]);  
    }  
    max = 0;  
    for (i = 1; i <= M; i++)  
    {  
        if (problem[i].wrong > max)  
        {  
            max = problem[i].wrong;  
        }  
    }  
    if (max == 0)  
    {  
        puts("Too simple");  
        return 0;  
    }  
    printf("%d", max);  
    for (i = 1; i <= M; i++)  
    {  
        if (problem[i].wrong == max)  
        {  
            printf(" %d", i);  
        }  
    }  
    return 0;  
}  
