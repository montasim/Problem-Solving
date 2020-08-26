import java.util.Scanner;

public class URI1008 {
    public static void main(String[] args) {
        String NAME;
        double TSALARY, FSALARY, TSALES;

        Scanner scanner = new Scanner(System.in);

        NAME = scanner.nextLine();
        FSALARY = scanner.nextDouble();
        TSALES = scanner.nextDouble();

        TSALARY = (FSALARY + ((TSALES * 15) / 100));

        System.out.println(String.format("TOTAL = R$ %.2f", TSALARY));
    }
}
