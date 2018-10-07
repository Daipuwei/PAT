package CÓïÑÔ¾ºÈü;

import java.util.Scanner;

public class Main {
	public static int Isprime(int i){
		int flag = 1;
		if ( i <= 1){
			flag = 0;
		}
		else{
			if ( i == 2){
				flag = 1;
			}
			else{
				if ( i % 2 == 0){
					flag = 0;
				}
				else{
					for ( int j = 3 ; j <= Math.sqrt(i) ; j += 2){
						if ( i % j == 0){
							flag = 0;
							break;
						}
					}
				}
			}
		}
		return flag;
	}
	
	public static int Find(String str,String[] Search){
		int flag = -1;
		for ( int i = 0 ; i < Search.length ; i ++){
			if ( str.equals(Search[i])){
				flag = i;
				break;
			}
			else{
				continue;
			}
		}
		return flag;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		
		int N = in.nextInt();
		boolean[] checked = new boolean[N+1];
		String[] orderId = new String[N+1];
		for ( int i = 1 ; i <= N ; i++){
			orderId[i] = in.next();
		}
		
		int M = in.nextInt();
		String[] SearchId = new String[M+1];
		for ( int i = 1 ; i <= M ; i++){
			SearchId[i] = in.next();
		}
		
		for ( int i = 1 ; i <= M ; i++){
			int index = Find(SearchId[i],orderId);
			if ( index == -1){
				System.out.println(SearchId[i]+": "+"Are you kidding?");
			}
			else{
					if ( checked[index] == false){
						if ( index == 1){
							System.out.println(SearchId[i]+": "+"Mystery Award");
						}
						else{
							if ( Isprime(index) == 1){
								System.out.println(SearchId[i]+": "+"Minion");
							}
							else{
								System.out.println(SearchId[i]+": "+"Chocolate");
							}
						}
						checked[index] = true;
					}
					else{
						System.out.println(SearchId[i]+": "+"Checked");
					}
			}
		}
		in.close();
	}

}
