#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int start,stop;
	cin>>start>>stop;
	int hour,minute,second;
	
	int time = (int)((stop - start) * 1.0 / 100 + 0.5); 
	hour = time / 3600;
	time %= 3600;
	minute = time / 60 ;
	second = time % 60;
	printf("%02d:%02d:%02d",hour,minute,second);
	
	return 0;
 } 
