#include <iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int A_say,B_say,A_show,B_show;
	int A_drink = 0,B_drink = 0;
	for ( int i = 0 ; i < num ; i++){
		cin>>A_say>>A_show>>B_say>>B_show;
		if ( (A_show == A_say + B_say) && ( B_show != A_say + B_say)){
			B_drink++;
		}
		if ( (B_show == A_say + B_say) && (A_show != A_say + B_say)){
			A_drink++;
		}
	}
	cout<<A_drink<<" "<<B_drink;
	
	return 0;
}
