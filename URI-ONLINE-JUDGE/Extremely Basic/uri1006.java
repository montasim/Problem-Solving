import java.util.Scanner;

public class uri1006 {
    public static void main(String[] args) {
        double A, B, C, MEDIA;

        Scanner scanner = new Scanner(System.in);

        A = scanner.nextDouble();
        B = scanner.nextDouble();
        C = scanner.nextDouble();

        MEDIA = ((2 * A) + (3 * B) + (5 * C))/10;

        System.out.println(String.format("MEDIA = %.1f" , MEDIA));
    }
}
