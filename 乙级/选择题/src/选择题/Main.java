package 选择题;

import java.util.Scanner;

public class Main {

	public static void main(String[] args){
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int N =in.nextInt();
		int M= in.nextInt();
		int[] False = new int[M+1]; 
		int[] Score = new int[M+1]; 
		int[] SelectionNum = new int[M+1];
		int[] TrueAnswerNum = new int[M+1];
		int[] StudentScore = new int[N+1];
		char[][] TrueAnswer = new char[M+1][6];
		int max = 0;
		int count = 1;
		for ( int i = 1 ; i <= M ; i++){
			Score[i] = in.nextInt();
			SelectionNum[i] = in.nextInt();
			TrueAnswerNum[i] = in.nextInt();
			for ( int j = 1 ; j <= TrueAnswerNum[i] ; j++){
				TrueAnswer[i][j] = in.next().charAt(0);
			}
		}
		
		for ( int i = 1 ; i <= N ; i++){
			int[] StudentAnswerNum = new int[M+1];
			char[] StudentAnswer;
			for ( int j = 1 ; j <= M ; j++){
				int flag = 1;
				char t = in.next().toCharArray()[0];
				StudentAnswerNum[j] = in.nextInt();
				StudentAnswer = new char[StudentAnswerNum[j]+1];
				for(int k = 1 ; k <= StudentAnswerNum[j] ; k++){
					StudentAnswer[k] = in.next().charAt(0);
					if (StudentAnswer[k] != TrueAnswer[j][k]){
						flag = 0;
					}
				}
				t = in.next().toCharArray()[0];
				if ( flag == 1){
					StudentScore[count] += Score[j];
				}
				else{
					False[j]++;
					if ( max < False[j]){
						max = False[j];
					}
				}
			}
			count++;
		}
		
		for ( int i = 1 ; i <= N ; i++){
			System.out.println(StudentScore[i]);
		}
		if ( max == 0){
			System.out.print("Too simple");
		}
		else{
			System.out.print(max);
			for (int i = 1 ; i <= M ; i++){
				if ( False[i] == max){
					System.out.print(" "+i);
				}
			}
			System.out.println();
		}
		in.close();
	}
}
