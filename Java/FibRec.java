import java.util.*;
public class FibRec {
    public static void fib(long a, long b, long n) {
        if(n==0)
        return;
        long c = a+b;
        System.out.print(c+ ",");
        fib(b,c,n-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number of Terms: ");
        long n = sc.nextInt();
        System.out.println("Fibonacci Series:");
        if(n==1)
        System.out.println(0);
        else if(n==2) {
            System.out.print(0 + ",");
            System.out.print(1);
        }
        else{
            System.out.print(0 + ",");
        fib(0,1,n-1);
        }
        sc.close();
    }
}
