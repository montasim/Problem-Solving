import java.util.Scanner;

public class uri1012 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float A = scanner.nextFloat();
        float B = scanner.nextFloat();
        float C = scanner.nextFloat();

        System.out.println(String.format("TRIANGULO: %.3f", (A * C) / 2));
        System.out.println(String.format("CIRCULO: %.3f", C * C * 3.14159));
        System.out.println(String.format("TRAPEZIO: %.3f", ((A + B) / 2) * C));
        System.out.println(String.format("QUADRADO: %.3f", B * B));
        System.out.println(String.format("RETANGULO: %.3f", A * B));
    }
}
