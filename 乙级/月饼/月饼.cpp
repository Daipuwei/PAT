#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct mooncake{
	double weight;
	double price;
	double profit;
	bool operator < ( const mooncake & a) const{
		return price > a.price;
	}
}; 

int main()
{
	int Num;
	int Weight;
	cin>>Num>>Weight;
	mooncake cake[Num];
	for ( int i = 0 ; i < Num ; i++){
		cin>>cake[i].weight;
	}
	for ( int i = 0 ; i < Num ; i++){
		cin>>cake[i].profit;
		cake[i].price = cake[i].profit / cake[i].weight;
	}
	
	sort(cake,cake+Num);
	double sum = 0 ;
	int i = 0;
	while( Weight != 0 && ( i < Num)){
		if ( cake[i].weight <= Weight){
			sum += cake[i].profit;
			Weight -= cake[i].weight;
			i++;
		}else{
			sum += cake[i].price * Weight;
			Weight = 0;
		}
	}
	printf("%.2f",sum);
	
	return 0;
}
