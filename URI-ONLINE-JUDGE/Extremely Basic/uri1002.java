import java.util.Scanner;

public class uri1002 {
    public static void main(String[] args) {
        double A, R;

        Scanner scanner = new Scanner(System.in);

        R = scanner.nextDouble();

        A = 3.14159 * (R * R);

        System.out.println(String.format("A=%.4f", A));
    }
}
