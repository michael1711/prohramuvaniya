#include <stdio.h>
void printStringLength(char *str) {
int length 0;
while (*str != '\0') {
printf("%c\n", *str);
length++;
str++;
}
printf("Кількість символів у рядку: %d\n", length);
}
int main() {
char str[100];
printf("Введіть рядок: ");
fgets(str, sizeof(str), stdin);
printStringLength(str);
return 0;
}