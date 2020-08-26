import java.util.Scanner;

public class uri1004 {
    public static void main(String[] args) {
        int A, B, PROD;

        Scanner scanner = new Scanner(System.in);

        A = scanner.nextInt();
        B = scanner.nextInt();

        PROD = A * B;

        System.out.printf("PROD = " + PROD + "\n");
    }
}
