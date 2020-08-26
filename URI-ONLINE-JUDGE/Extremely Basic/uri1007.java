import java.util.Scanner;

public class uri1007 {
    public static void main(String[] args) {
        int A, B, C, D, DIFERENCA;

        Scanner scanner = new Scanner(System.in);

        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();
        D = scanner.nextInt();

        DIFERENCA = ((A * B) - (C * D));

        System.out.println(String.format("DIFERENCA = " + DIFERENCA));
    }
}
