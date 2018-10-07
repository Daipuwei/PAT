#include <iostream>
using namespace std;

int main()
{
	int letter[27] = {0};
	char a;
	while ((a = getchar()) != '\n'){
		int index;
		if ( (a >='A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
			if ( a >= 'A' && a <= 'Z'){
				a += 32;
			}
			index = a - 'a' + 1;
			letter[index]++;
			if ( letter[index] > letter[0] ){
				letter[0] = letter[index];
			}
		} 
	}
	
	for ( int i = 1 ; i <= 26 ;i++){
		if ( letter[i] == letter[0]){
			char tmp = 'a'+i-1;
			cout<<tmp<<" "<<letter[0];
			break;
		}
	}
	
	return 0;
}
