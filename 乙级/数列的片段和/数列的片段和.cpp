#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int num;
	cin>>num;
	double A[num];
	double sum = 0;
	for ( int i = 0 ; i < num ; i++){
		cin>>A[i];
		sum += A[i] * (i + 1) * (num - i);
	}
	
	printf("%.2lf",sum);
	
	return 0;
 } 
