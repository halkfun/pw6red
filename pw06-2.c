#include <stdio.h> // V - 6
#include <wchar.h> // для работы с широкими символами и строками, предоставляет функцию вывода
// wprinf(), типа wint_t
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");

    wint_t sym;
    int count_a = 0;
    int count_e = 0;

    wprintf (L"Vvedite text i '#':\n");

    while ((sym = getwchar()) != L'#')
    {
        switch (sym)    // Оператор множественного выбора (оценивает
        // значения sym и переходит к соотв метке)
        { // группировка меток
            case L'a': // lat
            case L'A': // lat
            case L'а': // ru
            case L'А': // ru
                count_a++;
                break;

            case L'e': // lat
            case L'E': // lat
            case L'е': // ru
            case L'Е': //ru
                count_e++;
                break;
                
            default:    // типа else в if (иначе)
                break;
        }
    }
    wprintf (L"Kolvo sym 'a'= %d\n", count_a);
    wprintf (L" Kolvo sym 'e'= %d\n", count_e);
    wprintf (L"  Obshee kolvo sym 'a' i 'e'= %d\n", count_a + count_e);

    return 0;
}

// getchar() считывает из потока ввода ровно 1 байт. В современной кодировке символы занимают 2-4 байт. Поэтому getchar() разрывает многобайтовый символ на отдельные
// несвязанные байты =< программа не может корректно распознать и сравнить символ.

// getwchar() предназначена специально для широких символов. Она считывает последовательность байтов из потока ввода, декодирует её в соответствии с текущей локалью (setlocale)
// и возвращает символ как единое целое значение типа wchar_t