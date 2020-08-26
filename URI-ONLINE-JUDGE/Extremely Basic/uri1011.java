import java.util.Scanner;

public class uri1011 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double RADIUS = scanner.nextFloat();

        double VOLUME = (4.0 / 3) * 3.14159 * (RADIUS * RADIUS * RADIUS);

        System.out.println(String.format("VOLUME = %.3f", VOLUME));
    }
}
