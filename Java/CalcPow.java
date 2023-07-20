import java.util.*;
class CalcPow {
    public static int calc(int x, int n) {
        if(n==0)
        return 1;
        if(x==0)
        return 0;
        if(n%2==0)
        return calc(x,n/2)*calc(x,n/2);
        else
        return calc(x,n/2)*calc(x,n/2)*x;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int x = sc.nextInt();
        System.out.println("Enter Power: ");
        int n = sc.nextInt();
        System.out.println(x+" to the power "+n+" = "+calc(x,n));
        sc.close();
    }
}