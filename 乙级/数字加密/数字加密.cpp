#include <iostream>
#include <string> 
using namespace std;

string Reverse(string A)
{
	int len = A.length();
	char tmp;
	for ( int i = 0 ; i < len / 2 ; i++){
		tmp = A[i];
		A[i] = A[len-i-1];
		A[len-i-1] = tmp;
	}
	return A;
}

string encode(string B ,string A , int len)
{
	for ( int i = 1 ; i <= len ; i++){
		int tmp;
		if ( i % 2 == 1){
			tmp = (A[i-1] - '0' )+ (B[i-1] - '0');
			tmp %= 13;
			if ( tmp <= 9){
				B[i-1] = tmp + '0'; 
			}else if ( tmp == 10){
						B[i-1] = 'J';
					}else if ( tmp == 11){
							B[i-1] = 'Q';
						}else if ( tmp == 12){
							B[i-1] = 'K';
						}
		}else{
			tmp = (B[i-1] - '0')- ( A[i-1] - '0');
			if ( tmp < 0){
				tmp += 10;
			}
			B[i-1] = tmp + '0'; 
		}
	}
	return B;
}

int main()
{
	string A,B;
	cin>>A>>B;
	int len_A = A.length();
	int len_B = B.length();
	A = Reverse(A);
	B = Reverse(B);
	if ( len_A <= 100 && len_B <= 100){
		if ( len_B >= len_A){
			B = encode(B,A,len_A);
		}else{
			B = encode(B,A,len_B);
		}	
	} 
	
	B = Reverse(B);
	cout<<B;
	
	return 0;
}
