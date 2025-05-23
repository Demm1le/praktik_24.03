#include <stdio.h>
#include <stdbool.h> // чтобы мы могли использовать bool

// функция проверки, является ли число степенью двойки
bool isPowerOfTwo(int number) {
    
    /*
    алгоритм проверки:
    1. число должно быть положительным (степени двойки всегда > 0)
    2. у степени двойки в бинарном представлении только одна единица
       при вычитании 1 все биты после этой единицы становятся 1,
       а сама единица - 0. Поэтому побитовое И даст 0.
       
    пример:
    8 (1000) & 7 (0111) = 0000 = 0 → степень двойки
    6 (0110) & 5 (0101) = 0100 = 4 → не степень
    */
    
    return (number > 0) && ((number & (number - 1)) == 0);
}

int main() {
    int inputNumber;
    
    printf("Введите целое число: ");
    scanf("%d", &inputNumber);

    // проверяем, является ли число степенью двойки
    bool isPower = isPowerOfTwo(inputNumber);
    
    // выводим результат (1 - true, 0 - false)
    printf("%d\n", isPower);

    return 0;
}