#include <stdio.h>
int main() {
printf("Числа типу char займають %10 байт. \n", sizeof(char)); printf("Числа типу int займають %10 байт.\n", sizeof(int)); printf("Числа типу float займають %10 байт.\n", sizeof(float));
printf("Числа типу double займають %10 байт. \n", sizeof(double)); printf("Натисніть будь-яку клавішу для завершення програми....\n");
getchar(); // Очікування натискання клавіші
return 0;
}