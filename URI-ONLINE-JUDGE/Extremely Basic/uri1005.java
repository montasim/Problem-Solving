import java.util.Scanner;

public class uri1005 {
    public static void main(String[] args) {
        double A, B, MEDIA;

        Scanner scanner = new Scanner(System.in);

        A = scanner.nextDouble();
        B = scanner.nextDouble();
        MEDIA = ((3.5 * A) + (7.5 * B))/11;
        System.out.println(String.format("MEDIA = %.5f" , MEDIA));
    }
}
