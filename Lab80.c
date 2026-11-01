#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int count;
char ch1, ch2;
int i;

int main(void) {
    setlocale(0, "rus");
    
    printf("Введите количество символов: ");
    scanf("%d", &count);

    printf("Введите основной символ: ");
    scanf(" %c", &ch1);

    printf("Введите второй символ (для половинок): ");
    scanf(" %c", &ch2);

    // 1. Базовый вариант (только один символ)
    printf("\n1. Базовый вариант:\n");
    for (i = 1; i <= count; i++) putchar(ch1);
    printf("\n");

    // *) Напечатать в начале и в конце символ '+'
    printf("\n2. С плюсами по краям (*):\n");
    putchar('+');
    for (i = 1; i <= count; i++) putchar(ch1);
    putchar('+');
    printf("\n");

    // **) Полстроки одним символом, вторую половину другим
    printf("\n3. Две половинки разными символами (**):\n");
    for (i = 1; i <= count / 2; i++) putchar(ch1);
    for (i = 1; i <= count - (count / 2); i++) putchar(ch2);
    printf("\n");

    // ***) Печатать после каждого символа восклицательный знак!
    printf("\n4. С восклицательными знаками (***):\n");
    for (i = 1; i <= count; i++) {
        printf("%c!", ch1);
    }
    printf("\n");

    return 0;
}