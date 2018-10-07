#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int Sum(string str)
{
	int sum = 0;
	for (int i = 0 ; i < str.length() ; i++){
		sum += (str[i] - '0');
	} 
	return sum;
} 

bool Contain(int num ,int* Same,int cnt){
	bool flag = false;
	if ( cnt == 0){
		flag = false;
	}else{
		for ( int i = 0 ;  i < cnt ; i++){
			if ( Same[i] == num){
				flag =true;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	int N;
	cin>>N;
	int friends[N];
	int cnt = 0;
	int Same[N] = {0};
	for ( int i = 0 ; i < N ; i++){
		string str;
		cin>>str;
		friends[i] = Sum(str); 
	}
	
	for ( int i = 0 ; i < N ; i++){
		for ( int j = 0 ; j < N ; j++){
			if ( friends[i] == friends[j]){
				if (Contain(friends[j],Same,cnt) == false){
					Same[cnt] = friends[j];
					cnt++;
					break;
				}else{
					continue;
				}
			}
		}
	}
	
	sort(Same,Same+cnt);
	
	cout<<cnt<<endl;
	cout<<Same[0];
	for ( int i = 1 ; i < cnt ; i++){
		cout<<" "<<Same[i];
	}
	
	return 0;
}
