#include <iostream>
using namespace std;

int main()
{
	int N;
	int M;
	cin>>N>>M;
	int Student_Score[N] = {0};
	int Score[M];
	int Right_Answer[M];
	int Student_Answer[N][M];
	for ( int i = 0 ;  i <  M ; i++){
		cin>>Score[i];
	}
	for ( int i = 0 ; i < M ; i++){
		cin>>Right_Answer[i]; 
	}
	
	for ( int i = 0 ; i < N ; i++){
		for ( int j = 0 ; j < M ; j++){
			cin>>Student_Answer[i][j];
			if (Student_Answer[i][j] == Right_Answer[j]){
				Student_Score[i] += Score[j];
			}
		}
	}
	
	cout<<Student_Score[0];
	for ( int i = 1 ; i < N ; i++){
		cout<<endl<<Student_Score[i];
	}
	
	return 0;
 } 
