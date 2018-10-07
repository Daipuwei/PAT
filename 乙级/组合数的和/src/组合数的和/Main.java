package 组合数的和;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner  in = new Scanner(System.in);
		int N = in.nextInt();
		int[] num = new int[N];
		int sum = 0;
		for ( int i = 0 ; i < N ; i++){
			num[i] = in.nextInt();
		}
		for ( int i = 0 ; i < N ; i++){
			for ( int j = 0 ; j < N ; j++){
				if ( i != j){
					int tmp = num[i] * 10 + num[j];
					sum += tmp;
				}
			}
		}
		System.out.print(sum);
		in.close();
	}

}
