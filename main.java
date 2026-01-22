import java.util.*;
public class main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int add = n + m;
        int sub = n - m;
        int rightside = n >> 1;
        int leftside = n << 1;

        System.out.println(add);
        System.out.println(sub);
        System.out.println(rightside);
        System.out.println(leftside);
    }
}
