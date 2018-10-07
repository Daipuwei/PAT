package 我要通过;

import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int count_P,count_A,count_T;
		int pos_P,pos_T;
		String[] str = new String[n];
		for ( int i = 0 ; i < n ; i++ ){
			str[i] = in.next();
			count_P = 0;
	        count_A = 0;
	        count_T = 0; 
	        pos_P = 0;
	        pos_T = 0;
	        int len = str[i].length();
	        for ( int j = 0 ; j < len ; j++ ){
	        	if ( str[i].substring(j, j+1).equals("P")){
	        		count_P++;
	                pos_P = j;
	            }
	            if ( str[i].substring(j, j+1).equals("A"))
	                count_A++;
	            if ( str[i].substring(j, j+1).equals("T")){
	                count_T++;
	                pos_T = j;
	            }
	        }
	        if ( count_P+count_A+count_T != len|| pos_T-pos_P<=1 || count_P>1 || count_T>1 || pos_P*(pos_T-pos_P-1)!=len-pos_T-1){
	        	System.out.println("NO");
	        }
	        else{
	        	System.out.println("YES");
	        }
		}
		in.close();
	}

}
