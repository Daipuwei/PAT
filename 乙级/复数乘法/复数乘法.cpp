#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
	double R1,R2;
	double P1,P2;
	cin>>R1>>P1>>R2>>P2;
	double Real1,Real2;
	double Imagine1,Imagine2;
	Real1 = R1 * cos(P1);
	Real2 = R2 * cos(P2);
	Imagine1 = R1 * sin(P1);
	Imagine2 = R2 *sin(P2);
	
	double Real,Imagine;
	Real = Real1 * Real2 - Imagine1 * Imagine2;
	Imagine = Real1 * Imagine2 + Real2 * Imagine1;
	
	if ( -0.005< Real && Real <= 0){
		printf("0.00"); 
	}else{
		printf("%.2lf",Real);
	}
	if ( -0.005< Imagine && Imagine <= 0){
		printf("+0.00i"); 
	}else if ( Imagine > 0){
			printf("+%.2lfi",Imagine);
		}else{
			printf("%.2lfi",Imagine);
		}
	
	return 0;
}
