import java.util.Scanner;
public class powerOfTwo {

    boolean powTwo(int n) {
       if (n==0)
            return false;
            else {
                while(n%2==0)
                n/=2;
                return n==1;
            }
        }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x;
        System.out.println("Enter number to be checked: ");
        x = sc.nextInt();
        powerOfTwo obj = new powerOfTwo();
        if(obj.powTwo(x))
        System.out.println("The Given Number is a power of 2.");
        else
        System.out.println("The given number is not a power of 2.");
        sc.close();
    }
}
