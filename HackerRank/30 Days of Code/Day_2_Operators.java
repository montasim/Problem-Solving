/*    ------------------------------------------------------------------------------------------
 #    Author    : Mohammad Montasim -Al- Mamun Shuvo
 #    Copyright : Copyright 2020, Mohammad Montasim -Al- Mamun Shuvo
 #    Email     : montasimmamun@gmail.com
 #    Github    : https://github.com/montasimmamun/

 #    Date      : Created on 18/07/2020
 #    Version   : 1.0.1
 #    ------------------------------------------------------------------------------------------*/

import java.util.*;

public class Day_2_Operators {
    public static void main(String[] args) {
        double mealCost, tip, tax;
        int totalCost, tipPercent, taxPercent;

        Scanner scanner = new Scanner(System.in);

        mealCost = scanner.nextDouble();
        tipPercent = scanner.nextInt();
        taxPercent = scanner.nextInt();
        scanner.close();

        tip = mealCost * tipPercent / 100;
        tax = mealCost * taxPercent / 100;

        totalCost = (int) Math.round(mealCost + tip + tax);

        System.out.println(totalCost);

    }
}