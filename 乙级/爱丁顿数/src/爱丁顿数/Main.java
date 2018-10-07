package °®¶¡¶ÙÊý;

import java.util.Arrays;
import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		int[] distance = new int[N];
		for ( int i = 0 ; i < N ; i++){
			distance[i] = in.nextInt();
		}
		Arrays.sort(distance);
		if ( distance[0] > N)
			System.out.print(N);
		else{
			int e = 0;
			for ( int i = N - 1 ; i >= 0 ; i--){
				if ( distance[i] <= N - i){
					e = N - i - 1;
					break;
				}
			}
			System.out.print(e);
		}
		in.close();
	}
}
