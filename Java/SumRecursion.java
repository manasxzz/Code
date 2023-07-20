import java.util.*;
class SumRecursion {
    public static void printSum(int i, int n, int sum) {
        if(i==n) {
            sum+=i;
            System.out.println("The sum of first "+n+" natural numbers is: "+sum);
            return;
        }
        sum+=i;
        printSum(i+1, n, sum);
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n: ");
        int n = sc.nextInt();
        printSum(1, n, 0);
        sc.close();
    }
}