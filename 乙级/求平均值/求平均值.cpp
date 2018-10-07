#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int N;
char str[100][100]; 

bool Check(char s[])
{
    int i = 0;

    if(s[0] == '-')
    {
        i ++;
    }

    //整数部分检测，只能是数字 
    for(; s[i] && s[i] != '.'; i ++){
        if(!isdigit(s[i])){
            return false;
        }
    }

    //小数部分检测，只能是不超过2位的数字
    if(s[i] == '.'){
        for(int j = i + 1; s[j]; j ++){
            if(!isdigit(s[j]) || j - i > 2){
                return false;
            }
        }
    }

    double a = fabs(atof(s));
    //范围检测
    if(a > 1000.0)
        return false;

    return true;
}

void solve()
{
    int ans = 0;
    double sum = 0;

    for(int i = 0; i < N; i ++){
        if(Check(str[i])){
            ans ++;
            sum += atof(str[i]);
        }
        else{
            cout << "ERROR: " << str[i] << " is not a legal number" << endl;
        }
    }

    if(ans){
        if(ans == 1)
            printf("The average of 1 number is %.2lf\n", sum);
        else
            printf("The average of %d numbers is %.2lf\n", ans, sum / ans);

    }
    else{
        cout << "The average of 0 numbers is Undefined" << endl;
    }
}

int main()
{
    cin >> N;
    for(int i = 0; i < N; i ++){
        cin >> str[i]; 
    }
    solve();
    return 0;
}
