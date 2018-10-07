#include <iostream>
#include <cstdio>
using namespace std;

int GCD(int a , int b)
{
	int gcd;
	while( b!= 0){
		gcd = a % b;
		a = b ;
		b = gcd;
	}
	gcd = a;
	return gcd;
}

int GCM(int a , int b)
{
	int tmp1 = a;
	int tmp2 = b;
	int gcd = GCD(tmp1,tmp2);
	int gcm = a * b / gcd;
	return gcm;	
}


int main()
{
	int A,B,C,D;
	int num;
	scanf("%d/%d %d/%d %d",&A,&B,&C,&D,&num);
	
	int tmp1 = GCM(B,D);
	int gcm = GCM(tmp1,num);
	int mul = gcm / num;
	int start = A * gcm / B;
	int end = C * gcm / D;
	
	int cnt = 0;
	int Fenzi[num];
	if ( start > end){
		start = start + end;
		end = start - end;
		start = start - end;
	}
	
	for ( int i = 1 ; i < num ; i++){
		int tmp = i * mul;
		if ( GCD(i,num) == 1 && tmp > start && tmp < end){
			Fenzi[cnt++] = i;
		}
	}
	cout<<Fenzi[0]<<"/"<<num;
	for ( int i = 1 ; i < cnt ; i++){
		cout<<" "<<Fenzi[i]<<"/"<<num;
	}
	
	return 0;
}
