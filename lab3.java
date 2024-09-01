import java.util.Scanner;
class MaxMin {
    private int num1;
    private int num2;
    public MaxMin (int n1,int n2){
        this.num1=n1;
        this.num2=n2;
    }
    public void findMaxMin () {
        if (num1>num2)
        {
            System.out.println("Maximum:"+num1);
            System.out.println("Minimum:"+num2);
        }
        else
        {
            System.out.println("Maximum :"+num2);
            System.out.println("Minimum :"+num1);
        }
    }
}
public class Lab3 {
    public static void main (String []args){
        Scanner scanner = new Scanner (System.in);
        System.out.print("enter the first number :");
        int num1 = scanner.nextInt();
        System.out.print("enter the second number :");
        int num2 = scanner.nextInt();
        MaxMin calculate = new MaxMin (num1,num2);
        calculate.findMaxMin();
        scanner.close();
    }
}
