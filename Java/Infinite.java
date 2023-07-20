public class Infinite {
    public static void funcA(int n) {
        System.out.println(n);
        funcA(n*n);
    }
    public static void main(String args[]) {
        int n = 9;
        funcA(n);
    }
         
    }

