#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int n, i, m;
long long val;
double result_k;

int main(void) {
    setlocale(0, "rus");
    // 1) и 2) Ввод степени и вывод в формате 2^n
    printf("Введите степень n: ");
    scanf("%d", &n);

    printf("\nСтепени двойки:\n");
    for (i = 1; i <= n; i++) {
        val = 1LL << i; // Эквивалент 2^i
        // 3) Выравнивание по правому краю с помощью спецификатора ширины %5lld
        printf("2^%d = %5lld\n", i, val);
    }

    // 4) Преобразование конечного результата в K = 1024
    result_k = (double)val / 1024.0;
    printf("Результат: %.1fK\n", result_k);

    // 5) Вывод степеней до числа m с точностью 0.1
    printf("\nВведите число m (до какой степени считать): ");
    scanf("%d", &m);

    printf("Результаты в K (до 2^%d):\n", m);
    for (i = 1; i <= m; i++) {
        val = 1LL << i;
        result_k = (double)val / 1024.0;
        printf("2^%d = %.1fK\n", i, result_k);
    }

    return 0;
}