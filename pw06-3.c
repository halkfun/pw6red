#include <stdio.h> // V - 12

int main () {
    int count_pal = 0; // счётчик для 1й группы
    int sum_pal = 0; // Для ср арифм

    int count_other = 0; // счётчик для 2й группы
    int sum_other = 0; // Для ср арифм
    int num;            // Для хранения очередного числа
    printf ("Vvedite uelie chicla i '0':\n");

    while (scanf ("%d", &num) == 1 && num != 0)  // Проверяет успешность считывания ЦЕЛОГО числа, проверяет, что введённое число != 0
    {
        int abs_num = (num < 0 ) ? -num : num;

        if (abs_num >= 10 && abs_num <= 99)
        {
            int tens = abs_num / 10;
            int units = abs_num %10;

            if (tens == units) // Условие палиндрома (если цифра десятков == цифре единиц, число является палиндромом)
            {
                count_pal++;
                sum_pal += num;
            }
            else
            {
                count_other++;
                sum_other += num;
            }
        }
    }
    printf ("Result: \n");

    if (count_pal > 0)  // проверка перед делением если в группу палиндромов попало хотябы 1 число (защищает при делении на 0 при вычислении среднего арифметичесского)
    {
        printf ("palindromi: kolvo = %d, srednee = %.2f\n", count_pal, (float)sum_pal / count_pal);
    }
    else
    {
        printf ("palindrov net\n");
    }
    if (count_other > 0)  // проверка перед делением если в группу не палиндромов попало хотябы 1 число (защищает при делении на 0 при вычислении среднего арифметичесского)
    {
        printf ("Ostalnie: kolvo = %d, srednee = %.2f\n", count_other, (float)sum_other / count_other);
    }
    else{
        printf ("Ostalnix uicel ne vvedeno\n");
    }

    return 0;

}
//  '&&' Если  левый операнд == 0, то всё выражение ложно, поэтому правый операнд даже не вычисляется
// '||' если левый операнд истинен, то всё выражение истино, поэтому правый операнд даже не вычисляется