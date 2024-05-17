#include <stdio.h>
int main() {
FILE *ff;
int base;
ff = fopen("sam", "r"); // Відкривається файл із іменем sam, який ідентифікується fscanf(ff, "%d", &base); // ff вказує на файл із іменем ѕаm
fclose(ff); // Закриття файлу
ff = fopen("data", "a"); // Доповнення (відкривається файл для додавання даних) fprintf(ff, "sam is %d.\n", base); // ff вказує на data fclose(ff); // Закриття файлу
}