#include <iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int Score[num+1] = {0};
	int max_index = 1;
	int max = 0;
	int index,score;
	for ( int i = 1 ; i <= num ; i++){
		cin>>index>>score;
		Score[index] += score;
		if ( Score[index] >= max){
			max_index = index;
			max = Score[index];
		}
	}
	cout<<max_index<<" "<<Score[max_index];
	
	return 0;
}
