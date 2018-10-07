#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	char a;
	cin>>num>>a;
	int rest = 0;
	int cnt = 1;
	int tmp = 2 * cnt * cnt - 1;
	
	while ( tmp <= num){
		cnt++;
		tmp = 2 * cnt * cnt - 1;
	}
	cnt--;
	tmp = 2 * cnt * cnt - 1;
	num = num - tmp;
	
	tmp = 2 * (cnt - 1) + 1; 
	cnt--;
	for ( int i = 0 ; i < tmp ; i++){
		for ( int j = 0 ; j < cnt - abs( i - cnt) ; j++){
			cout<<" "; 
		}
		for ( int k = 0 ; k < abs(i - cnt) * 2 + 1 ; k++){
			cout<<a;
		}
		cout<<endl;
	}
	cout<<num;
	
	return 0;
}
