#include <stdio.h>

int main()
{
	int N,M;
	scanf("%d%d",&N,&M);
	
	int score[M];
	int i;
	for (i = 0 ; i < M ; i++){
		scanf("%d",&score[i]);
	}
	
	int answer[M];
	for (i = 0 ; i < M ; i++){
		scanf("%d",&answer[i]);
	}
	
	int Student_answer[N][M];
	int Sum[N]; 
	int j;
	for ( i = 0 ; i < N ; i++){
		Sum[i] = 0;
	}
	for ( i = 0 ; i < N ; i++){
		for ( j = 0 ; j < M ; j++){
			scanf("%d",&Student_answer[i][j]);
			if ( Student_answer[i][j] == answer[j]){
				Sum[i] += score[j];	
			}
		}
		printf("%d\n",Sum[i]);
	}
	
	return 0;
 } 
