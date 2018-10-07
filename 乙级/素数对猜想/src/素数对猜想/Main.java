package ËØÊı¶Ô²ÂÏë;

import java.util.Scanner;

public class Main {
	
	public static boolean Isprime(int n){
		boolean flag =true;
		if ( n <= 1 ){
			flag = false;
		}
		else if ( n == 2){
			flag = true;
		}
		else{
			if ( n % 2 == 0 ){
				flag =false;
			}
			else{
				for ( int i = 3 ; i <= Math.sqrt(n) ; i += 2 ){
					if ( n % i == 0){
						flag = false;
						break;
					}
				}
			}
		}
		return flag;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int count = 0;
		int[] prime = new int[n];
		for ( int i = 2 ; i <= n ; i++ ){
			if ( Isprime(i) == true ){
				prime[count++] = i;
			}
		}
		int num = 0;
		for ( int i = 0 ; i < count ; i++ ){
			if (prime[i+1] - prime[i] == 2){
				num++;
			}
		}
		System.out.print(num);
		in.close();
	}

}
