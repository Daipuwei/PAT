#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	char em[3][20][10] = {0};
    int len[3] = {0};

    for(int i = 0; i < 3; i ++){
        len[i] = 0;
        int j = 0;

        bool flag = false;
        char ch;
        while((ch = getchar()) != '\n'){
            if(ch == '['){
                flag = true;
                len[i] ++;
                j = 0;
            }
            else if(ch == ']'){
                flag = false;
            }
            else if(flag){
                em[i][len[i]][j ++] = ch;
            }
        }
    }

    int K;
    cin >> K;
    for(int i = 0; i < K; i ++){

        int lHand, lEye, mouth, rEye, rHand;
        cin >> lHand >> lEye >> mouth >> rEye >> rHand;

        int w = false;
        if(lHand < 1 || lHand > len[0] || rHand < 1 || rHand > len[0])
            w = true;
        if(lEye < 1 || lEye > len[1] || rEye < 1 || rEye > len[1])
            w = true;
        if(mouth < 1 || mouth > len[2])
            w = true;
        if(w){
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }

        cout << em[0][lHand] << "("  << em[1][lEye] << em[2][mouth] << em[1][rEye] << ")"  << em[0][rHand] << endl;
    }

	return 0;
}
