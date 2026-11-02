#include <stdio.h> // V - 19
#include <ctype.h>

int main () {
    int sym;
    int hex_count = 0;

    printf ("Vvedite text i '#':\n");

    while ((sym = getchar()) != '#') // getchar считывает один символ из входного потока и присваивает
    // его 'sym'
    {
        if (isxdigit(sym)) // ф-я проверяет является ли символ 16тиричной цифрой
        {
            hex_count++;
        }
    }
    printf ("Col-vo 16r civr: %d\n", hex_count);

    return 0;
}

// 