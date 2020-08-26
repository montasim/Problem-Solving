/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 18/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/

import java.util.*;

public class Day_3_Intro_to_Conditional_Statements {
    public static void main(String[] args) {
        int n;

        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        scanner.close();

        if (n % 2 != 0) {
            System.out.println("Weird");
        } else if (n % 2 == 0) {
            if (n > 1 && n < 6) {
                System.out.println("Not Weird");
            } else if (n > 5 && n < 21) {
                System.out.println("Weird");
            } else {
                System.out.println("Not Weird");
            }
        } else {
            /* code */
        }

    }
}