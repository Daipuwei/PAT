#include <iostream>
using namespace std;

int Isempty(int* count , int n)
{
	int flag = 1;
	for ( int i = 0 ; i < n ; i++){
		if ( count[i] > 0 ){
			flag = 0;
			break;
		}
	}
	
	return flag;
}

int main()
{
	string str;
	cin>>str;
	char letter[6]={'P','A','T','e','s','t'};
	int count[6] = {0};
	
	for ( int i = 0 ; i < str.length() ; i++){
		if ( str[i] == 'P'){
			count[0]++;
		}
		if ( str[i] == 'A'){
			count[1]++;
		}
		if ( str[i] == 'T'){
			count[2]++;
		}
		if ( str[i] == 'e'){
			count[3]++;
		}
		if ( str[i] == 's'){
			count[4]++;
		}
		if ( str[i] == 't'){
			count[5]++;
		}
	}
	
	while (!Isempty(count,6)){
		for ( int i = 0 ; i < 6 ; i++){
			if ( count[i] != 0){
				cout<<letter[i];
				count[i]--;	
			}else{
				continue;
			}
		}
	} 
	
	return 0;
}
