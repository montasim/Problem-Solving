import java.util.Scanner;

public class uri1010 {
    public static void main(String[] args) {
        int CODE1, CODE2, NOPRODUCT1 = 0, NOPRODUCT2 = 0;
        float PFOUNIT1 = 0, PFOUNIT2 = 0;

        Scanner scanner = new Scanner(System.in);

        CODE1 = scanner.nextInt();
        NOPRODUCT1 = scanner.nextInt();
        PFOUNIT1 = scanner.nextFloat();

        CODE2 = scanner.nextInt();
        NOPRODUCT2 = scanner.nextInt();
        PFOUNIT2 = scanner.nextFloat();

        double TPRICE = ((NOPRODUCT1 * PFOUNIT1) + (NOPRODUCT2 * PFOUNIT2));

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", TPRICE);
    }
}
