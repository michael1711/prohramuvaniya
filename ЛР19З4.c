#include <stdio.h>

int main() {
    // Задаємо 8 змінних цілого типу
    int a = 10, b = 20, c = 30, d = 40, e = 50, f = 60, g = 70, h = 80;

    // Відкриваємо файл для запису
    FILE *fp = fopen("numbers.txt", "w");
    if (fp == NULL) {
        printf("Не вдалося відкрити файл для запису.\n");
        return 1;
    }

    // Записуємо 8 змінних у файл
    fprintf(fp, "%d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h);
    fclose(fp); // Закриваємо файл після запису

    // Оголошуємо змінні для зчитування
    int a_read, b_read, c_read, d_read, e_read, f_read, g_read, h_read;

    // Відкриваємо файл для читання
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Не вдалося відкрити файл для читання.\n");
        return 1;
    }

    // Зчитуємо 8 змінних з файлу
    fscanf(fp, "%d %d %d %d %d %d %d %d", &a_read, &b_read, &c_read, &d_read, &e_read, &f_read, &g_read, &h_read);
    fclose(fp); // Закриваємо файл після читання

    // Виводимо зчитані значення на екран
    printf("Зчитані значення:\n");
    printf("%d %d %d %d %d %d %d %d\n", a_read, b_read, c_read, d_read, e_read, f_read, g_read, h_read);

    return 0;
}
