#include <stdio.h>
int main() {
FILE *in; // Опис вказівника на файл
int ch;
if ((in = fopen("proba", "r")) != NULL) { // Відкривається файл для читання, пере while ((ch = getc(in)) != EOF) // Отримується символ із іn putc(ch, stdout); // Виведення символа в стандартний потік на екран. fclose(in); // Закриття файлу
} else {
printf("Файл proba не відкривається\n"); // Повідомлення про помилку, якщо файл
}
}