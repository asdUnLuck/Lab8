#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int n, m, s, i, k;

int main(void) {
    setlocale(0, "rus");

    // Шаг 1 и 2: Ввод значений
    printf("Введите начало диапазона m: ");
    scanf("%d", &m);
    printf("Введите конец диапазона n: ");
    scanf("%d", &n);

    // Шаг 3: Инициализация
    s = 0;
    k = 1;

    // Шаг 4, 5: Условие и уменьшение счетчика
    for (i = m; i >= n; i--) {
        // Шаг 6: Накопление результата и вывод итераций
        s += i;
        printf("выполнено %d раз\n", k++);
    }

    // Шаг 7: Вывод результата
    printf("результат %d\n", s);

    return 0;
}