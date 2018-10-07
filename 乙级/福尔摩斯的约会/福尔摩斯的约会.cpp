#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s1;
	string s2;
	string s3;
	string s4;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	int week;
	int hour;
	int len = ( s1.length() <= s2.length())? s1.length():s2.length();
	int i;
	for ( i = 0 ; i < len ; i++){
		if ( (s1[i] == s2[i]) && (s1[i] >= 'A' &&  s1[i] <= 'G')){
				week = s1[i] - 'A' +1;
				switch(week){
					case 1: cout<<"MON ";break;
					case 2: cout<<"TUE ";break;
					case 3: cout<<"WED ";break;
					case 4: cout<<"THU ";break;
					case 5: cout<<"FRI ";break;
					case 6: cout<<"SAT ";break;
					case 7: cout<<"SUN ";break;
				}
				break; 
		}
	}
	
	i++;
	for ( ; i < len ; i++){
		if ( (s1[i] == s2[i]) && (s1[i] >= 'A' && s1[i] <= 'N')){
			hour = s1[i] - 'A' +10;
			if ( hour < 10 ){
				cout<<"0"<<hour<<':';
			}else{
				cout<<hour<<':';
			}
			break;
		}
		if ((s1[i] == s2[i]) && (s1[i] >= '0' && s1[i] <= '9')){
			hour = s1[i] - '0';
			if ( hour < 10 ){
				cout<<"0"<<hour<<':';
			}else{
				cout<<hour<<':';
			}
			break;
		}
		
	}
	
	len = ( s3.length() <= s4.length())? s3.length():s4.length();
	for ( i = 0 ; i < len ; i++){
		if((s3[i]==s4[i]) && (((s3[i]>='A') && (s3[i]<='Z')) || ((s3[i]>='a') && (s3[i]<='z'))))
        {    
            if( i < 10)
                cout<<'0'<<i;
            else
                cout<<i;
            break;
        }
	}
	
	return 0;
}
