#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
	string A;
	int B;
	int R = 0;
	vector<int> Q;
	cin>>A>>B;
	int i = 0;
	for ( int i = 0 ; i < A.length() ; i++){
		int tmp = ( R * 10 + A[i] - '0') / B;
		Q.push_back(tmp);
		R = ( R * 10 + A[i] - '0') % B;
	}
	vector<int>::iterator start = Q.begin() +1;
	vector<int>::iterator end = Q.end();
	if ( Q[0] != 0){
		cout<<Q[i];
	}else{
		if ( Q[1] == 0){
			cout<<"0";
		}
	}
	for ( ; start != end ; start++){
		cout<<*start;
	}
	cout<<" "<<R;
	
	return 0;
 } 
