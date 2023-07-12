import java.util.Scanner;

class spiralmatrix {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int row = sc.nextInt();
        System.out.println("Enter the number of colums: ");
        int col = sc.nextInt();
        int[][] arr = new int[row][col];
        System.out.println("Enter Matrix: ");
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++)
            arr[i][j] = sc.nextInt();
        }
        int rs = 0, re = row-1, cs = 0, ce = col-1;
        while(rs<=re && cs<=ce) {
            for(int i=cs; i<=ce; i++)
            System.out.print(arr[rs][i]);
            rs++;
            for(int i=rs; i<=re; i++)
            System.out.print(arr[i][ce]);
            ce--;
            for(int i=ce; i>=cs; i--)
            System.out.print(arr[re][i]);
            re--;
            for(int i=re; i>=rs; i--)
            System.out.print(arr[i][cs]);
            cs++; 
        }
        sc.close();
    }
}