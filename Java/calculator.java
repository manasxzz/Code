import java.util.*;
class calculator{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first Number: ");
        int a = sc.nextInt();
        System.out.println("Enter Second Number: ");
        int b = sc.nextInt();
        System.out.println("1. Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\nEnter Choice: ");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
            System.out.println("Sum= "+(a+b));
            break;
            case 2:
            System.out.println("Dif= "+(a-b));
            break;
            case 3:
            System.out.println("Prod= "+(a*b));
            break;
            case 4:
            System.out.println("Div= "+(a/b));
            break;
            case 5:
            System.out.println("Mod= "+(a%b));
            break;
            default:
            System.out.println("Wrong Choice!");

        }
        sc.close();
    }
}
