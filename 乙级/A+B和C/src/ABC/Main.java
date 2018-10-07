package ABC;

import java.util.Scanner;  
public class Main{  
    public static void main(String[] args){  
        Scanner sc = new Scanner(System.in);  
        int T =  sc.nextInt();  
        long[]a = new long[T];  
        long[]b = new long[T];  
        long[]c = new long[T];  
        for(int i=0 ;i<T ;i++){  
            a[i] = sc.nextLong();  
            b[i] = sc.nextLong();  
            c[i] = sc.nextLong();  
        }  
        for(int i=0 ;i<T ;i++){  
            if(c[i]-b[i]<a[i]){  
                System.out.printf("Case #%d: true\n", i+1);  
            }  
            else{  
                System.out.printf("Case #%d: false\n", i+1);  
            }  
        }
        sc.close();
    }  
}  