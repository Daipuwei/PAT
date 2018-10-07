#include <iostream>
using namespace std;

int main()
{
	double num;
	char letter;
	cin>>num>>letter;
	int cnt = (int)(num / 2 + 0.5);
	cnt--;
	
	for ( int i = 0 ; i < num ; i++){
		cout<<letter;
	}
	for ( int i = 0 ; i < cnt ; i++){
		cout<<endl;
		if ( i != cnt - 1){
			for ( int j = 0 ; j < num ; j++){
				if ( j == 0 || j == num-1){
					cout<<letter;
				}else{
					cout<<" ";
				} 
			}
		}else{
			for ( int j = 0 ; j < num ; j++){
				cout<<letter;
			}
		}
			
	} 
	
	return 0;
}
