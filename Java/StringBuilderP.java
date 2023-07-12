class StringBuilderP {
    public static void main(String args[]) {
        StringBuilder sb = new StringBuilder("Manas");
        sb.insert(5, " Mishra");
        sb.reverse();
        sb.delete(0,6);
        System.out.println(sb);

    }
}