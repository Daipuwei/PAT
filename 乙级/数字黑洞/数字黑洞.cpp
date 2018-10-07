#include <iostream>
using namespace std;

bool IsSame( int a)
{
	int num[4];
	for ( int i = 0 ; i < 4 ; i++){
		num[i] = a % 10;
		a /= 10;
	}
	int tmp = num[0];
	int count = 1;
	for ( int i = 1 ; i < 4 ; i++){
		if (num[i] == tmp){
			count++;
		}
	}
	if ( count == 4){
		return true;
	}else{
		return false;
	}
}
	
int NotMaxSort(int Num)
{
	int num[4];
	for ( int i = 0 ; i < 4 ; i++){
			num[i] = Num % 10;
			Num /= 10;
	}
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = i + 1 ; j < 4 ; j++){
			if ( num[j] >= num[i] ){
				num[i] = num[i] + num[j];
				num[j] = num[i] - num[j];
				num[i] = num[i] - num[j];
			}
		}
	} 
	int sum = 0;
	for ( int i = 0 ; i < 4 ; i++){
		sum = sum * 10 + num[i];
	} 
	
	return sum;
}

int NotMinSort(int Num)
{
	int num[4];
	for ( int i = 0 ; i < 4 ; i++){
			num[i] = Num % 10;
			Num /= 10;
	}
	for ( int i = 0 ; i < 3 ; i++){
		for ( int j = i + 1 ; j < 4 ; j++){
			if ( num[j] <= num[i] ){
				num[i] = num[i] + num[j];
				num[j] = num[i] - num[j];
				num[i] = num[i] - num[j];
			}
		}
	} 
	int sum = 0;
	for ( int i = 0 ; i < 4 ; i++){
		sum = sum * 10 + num[i];
	} 
	
	return sum;
}
	
int main()
{
	int Num;
	cin>>Num;
		if ( IsSame(Num) == false){
			int a ,b ,c;
			do{
				a =  NotMaxSort(Num);
				b =  NotMinSort(Num);
				c = a - b;
				cout<<a<<" - ";
				if ( b == 0 ){
					cout<<"0000 = "<<c<<endl;
				}else{
					if ( b / 10 == 0){
						cout<<"000"<<b<<" = "<<c<<endl;
					}else{
						if ( b / 100 == 0){
							cout<<"00"<<b<<" = "<<c<<endl;
						}else{
							if ( b / 1000 == 0){
								cout<<"0"<<b<<" = "<<c<<endl;
							}else{
								 cout<<b<<" = "<<c<<endl;
							}
						}
					} 
				}
				Num = c;
			}while( c != 6174);
		}
		else{
			cout<<Num<<" - "<<Num<<" = 0000\n"; 
		}
	
	return 0;
}
