#include <iostream>
#include <string.h>
using namespace std;

string Change(string str)
{
	for ( int i = 0 ; i < str.length() ; i++){
		if ( str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}	 
	}
	return str;
}


int main()
{
	string str1,str2;
	cin>>str1>>str2;
	str1 = Change(str1);
	str2 = Change(str2);
	
	string letter = "";
	for ( int i = 0 ; i < str1.length() ; i++){
		if ( letter.find(str1[i],0) == letter.npos ){
			letter.append(1,str1[i]);
		}
	}
	
	string c;
	for ( int i = 0 ; i < letter.length() ; i++){
		if ( str2.find(letter[i],0) == str2.npos){
			c.append(1,letter[i]);
		}
	}
	cout<<c;

	return 0;
 } 
