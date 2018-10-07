#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	int A,B,k;
	cin>>A>>B>>k;
	int sum = A + B;
	vector<char> v;
	while ( sum != 0 ){
		int tmp = sum % k;
		v.push_back('0'+tmp);
		sum /= k;
	}
	vector<char>::reverse_iterator start = v.rbegin();
	vector<char>::reverse_iterator end = v.rend();
	if ( v.capacity() == 0){					//注意V为空的情况 
		cout<<"0";
	}else{
		for (; start != end ; start++){
			cout<<*start;
		}	
	}
	
	return 0;
 } 
