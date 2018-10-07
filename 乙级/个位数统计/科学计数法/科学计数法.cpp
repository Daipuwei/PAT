#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string Num;
	cin>>Num;
	if ( Num[0] == '-')
		cout<<Num[0];
	double num = 0;
	int i = 1;
	while( Num[i] != '.'){
		num = num * 10 + ( Num[i] - '0'); 	
		i++; 
	}
	i++;
	int j = i; //小数点后的第一个数字地址； 
	while ( Num[i] != 'E'){
		i++;
	}
	int k = i;	//E的位置 
	i--;
	int count = 0;	//小数中无效的‘0’的个数 
	while ( Num[i] == '0'){
		count++;
		i--;
	}
	int cnt = i - j + 1;//有效小数位数 
	int tmp = 0;		//小数部分 
	for ( ; j <= i ; j ++){
		tmp = tmp * 10 + ( Num[j] - '0'); 
	} 
	num += tmp * 1.0 / pow(10,cnt);
	char flag = Num[++k];
	int Count = 0;
	for ( int i = ++k ; i < Num.length() ; i++){
		Count = Count * 10 + ( Num[i] - '0');
	} 
	if ( flag == '-'){
		num /= pow(10,Count);
		cout<<num;
		for ( int i = 0 ; i < count ; i++){
			cout<<"0";
		}
	}
	else{
		if ( cnt > Count){
			num *= pow(10,Count);
			cout<<num;
			for(int i = 0 ; i < count ; i++){
				cout<<"0";
			}	
		}
		else if ( cnt == Count){
			num *= pow(10,Count);
			cout<<num<<".";
			for(int i = 0 ; i < count ; i++){
				cout<<"0";
			}	
		}
		else{
			num *= pow(10,cnt);
			cout<<num;
			for ( int i = 0 ; i < ( Count - cnt) ; i++){
				cout<<"0";
			}
		} 
	}
	
	return 0;
 } 
