#include <stdio.h> // V - 18

int main() {
    double amount;
    double discount = 0.0;
    double t1 = 0.0, t2 = 0.0, t3 = 0.0, t4 = 0.0;
    double disc1 = 0.0, disc2 = 0.0, disc3 = 0.0, disc4 = 0.0;

    printf ("Vvedite symmy pokupki: ");
    if (scanf ( "%lf", &amount) != 1 || amount < 0.0)
    {
        printf ("Oshibka: nekor symma\n");
        return 0;
    }
    if (amount <= 100.0)
    {
        t1 = amount;
    }
    else if (amount <= 500.0)
    {
        t1 = 100.0;
        t2 = amount - 100.0;
        disc2 = t2 * 0.05;
    }
    else if (amount <= 1000.0)
    {
        t1 = 100.0;
        t2 = 400.0;
        disc2 = t2 * 0.05;
        t3 = amount - 500.0;
        disc3 = t3 * 0.10;
    }
    
    else
    {
        t1 = 100.0;
        t2 = 400.0;
        disc2 = t2 * 0.05;
        t3 = 500.0;
        disc3 = t3 * 0.10;
        t4 = amount - 1000.0;
        disc4 = t4 * 0.15;
    }

    discount = disc1 + disc2 + disc3 + disc4;
    double total_to_pay = amount - discount;

    printf (" Raschet\n");
    printf ("Isxod symma: %.2f\n", amount);
    printf ("Stypen 1: symma = %.2f, skidka = %.2f\n", t1, disc1);
    printf ("Stypen 2: symma %.2f, skidka = %.2f\n", t2, disc2);
    printf ("Stypen 1: symma = %.2f, skidka = %.2f\n", t3, disc3);
    printf ("Stypen 2: symma %.2f, skidka = %.2f\n", t4, disc4);

    return 0;
}

// double - 6-7 значачих 10тичных ; double - 15-17 значащих 10тичных чисел