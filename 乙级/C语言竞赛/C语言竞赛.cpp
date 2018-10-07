#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

bool Isprime(int a)
{
	bool flag = true;
	if ( a <= 1){
		flag = false;
	}else if( a == 2){
		flag = true;
		}else{
			if ( a % 2 == 0){
				flag = false;
			}else{
				for ( int i = 3 ; i <= sqrt(a) ; i += 2){
					if ( a % 2 == 0){
						flag = false;
						break;
					}
				} 
			}
		}
	return flag; 
}

int main()
{
	int N;
	cin>>N;
	int order[10000] = {0};
	for ( int i = 0 ; i < N ; i++){
		int id;
		cin>>id;
		order[id] = i+1;
	}
	
	int n;
	cin>>n;
	int check[n];
	int count = 0;
	for ( int i = 0 ; i < n ; i++){
		int search;
		cin>>search;
		if (order[search] == 0){
			printf("%4d",search);
			cout<<": Are you kidding?"<<endl;
		}else if (order[search] == -1){
				printf("%04d",search);
				cout<<": Checked"<<endl;
			}else{
				if ( order[search] == 1){
					printf("%04d",search);
					cout<<": Mystery Award"<<endl;
				}else{
					if (Isprime(order[search]) == true){
						printf("%04d",search);
						cout<<": Minion"<<endl;
					}else{
						printf("%04d",search);
						cout<<": Chocolate"<<endl;
					}
				}
			order[search] = -1;
			}
		}
	
	return 0;
}

