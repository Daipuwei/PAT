#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
bool greater(T a1, T a2){
    return a1 > a2;
}

int Find_M(int num)
{
	int min = 1 - num;
	int tmp = 1 - num;
	int m;
	for ( int i = 2 ; i < num ; i++){
		if ( num % i == 0){
			tmp = i - num / i; 
		}
		if ( min < 0){
			min = tmp;
			m = i; 
		}else if ( min > tmp){
			min = tmp;
			m = i;
		}
	}
	
	return m;
 } 

int main()
{
	int num;
	cin>>num;
	int m = Find_M(num);
	int n = num / m;
	int tmp[num];
	int A[m][n];
	for ( int i = 0 ; i < num ; i++){
		cin>>tmp[i];
	} 
	sort(tmp,tmp+num,greater<int>);
	for ( int i = 0 ; i < num ; i++) 
		cout<<tmp[i]<<" ";
		
	return 0;
} 
