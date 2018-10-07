#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int N;
int a[1000];

void solve()
{
    int A[5] = {0}, n[5] = {0};

    for(int i = 0; i < N; i ++){
        int k = a[i] % 5;

        //A1 = �ܱ�5����������������ż���ĺͣ�
        if(0 == k){
            if(0 == a[i] % 2)
                A[0] += a[i], n[0] ++;
        }
        //A2 = ����5������1�����ְ�����˳����н�����ͣ�������n1-n2+n3-n4...��
        else if(1 == k){
            n[1] ++;
            if(n[1] & 1)
                A[1] += a[i];
            else
                A[1] -= a[i];
        }
        //A3 = ��5������2�����ֵĸ�����
        else if(2 == k){
            n[2] ++;
            A[2] ++;
        }
        //A4 = ��5������3�����ֵ�ƽ��������ȷ��С�����1λ��
        else if(3 == k){
            n[3] ++;
            A[3] += a[i];
        }
        //A5 = ��5������4��������������֡�
        else{
            n[4] ++;
            A[4] = max(A[4], a[i]);
        }
    }

    for(int i = 0; i < 5; i ++){
        if(n[i]){
            if(i != 3)
                cout << A[i];
            else
                printf("%.1lf", 1.0*A[i] / n[i]);
        }
        else
            cout << "N";
        if(i < 4)
            cout << " ";
    }
}

int main()
{
    cin >> N;
    for(int i = 0; i < N; i ++){
        cin >> a[i];
    }
    solve(); 
    return 0;
}
