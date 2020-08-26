import java.util.Scanner;

public class uri1009 {
    public static void main(String[] args) {
        int NUMBER, WHOUR;
        float AMOUNTPH, SALARY;

        Scanner scanner = new Scanner(System.in);

        NUMBER = scanner.nextInt();
        WHOUR = scanner.nextInt();
        AMOUNTPH = scanner.nextFloat();

        SALARY = WHOUR * AMOUNTPH;

        System.out.println(String.format("NUMBER = " + NUMBER));
        System.out.println(String.format("SALARY = U$ %.2f", SALARY));
    }
}
