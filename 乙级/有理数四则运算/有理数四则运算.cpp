#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cmath>
using namespace std;

//转换字符串 
long long Change(string str)
{
	long long sum= 0;
	for ( int i = 0 ; i < str.length() ; i++){
		long long tmp = str[i] - '0';
		sum = sum * 10 + tmp; 
	}
	return sum;
}

//分解字符串 
void Change_str(string str,long long* A,long long* B)
{
	long long index_semicolon = str.find("/",0);        //分号下标 
	long long index_negative = str.find("-",0);		   //负号下标 
	
	if ( index_negative == 0){
		long long length = index_semicolon -1;
		*A = -1 * Change(str.substr(1,length));
		length = str.length()- index_semicolon - 1;
		*B = Change(str.substr(index_semicolon+1,length));
	}else if ( index_negative == str.npos){
		int length = index_semicolon;
		*A = Change(str.substr(0,length));
		length = str.length() - index_semicolon - 1;
		*B = Change(str.substr(index_semicolon+1,length));
	}
}

//a与b的最大公约数 
int GCD(long long a,long long b)
{
	long long gcd;
	while( b != 0){
		gcd = a % b;
		a = b;
		b = gcd;
	}
	gcd = a;
	return gcd;
}

void Print(long long a,long long b)
{
	long long f = a / b;
	long long r = a % b;
	
	if ( f == 0){
		if ( r == 0){
			cout<<"0";
		}else{
			long long gcd = GCD(r,b);
			if ( a * b < 0){
				cout<<"-"<<abs(r/gcd)<<"/"<<abs(b/gcd);
			}else{
				cout<<abs(r/gcd)<<"/"<<abs(b/gcd);
			}
		}
	}else{
		if ( f < 0){
			cout<<"(";
		}
		cout<<f;
		if ( r != 0){
			int gcd = GCD(r,b);
			cout<<" "<<abs(r/gcd)<<"/"<<abs(b/gcd);
		}
		if ( f < 0){
			cout<<")";
		}
	}	
}

void PrintForm(long long A,long long B,long long C,long long D,int index)
{
	char sign[] = {'+','-','*','/'};
	Print(A,B);
	cout<<" "<<sign[index]<<" ";
	Print(C,D);
	cout<<" = " ;
	
	if ( index == 0){
		Print(A*D+C*B,B*D);
	}else if ( index == 1){
			Print(A*D-C*B,B*D);		
		}else if( index == 2){
				Print(A*C,B*D);
			}else{
				if ( B * C == 0){
					cout<<"Inf";
				}else{
					Print(A*D,B*C);
				}
			} 
}

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	long long A,B,C,D;
	
	Change_str(str1,&A,&B);
	Change_str(str2,&C,&D);
	
	for ( int i = 0 ; i < 4 ; i++){
		PrintForm(A,B,C,D,i);
		cout<<endl;	
	}
		
	return 0;
 } 
