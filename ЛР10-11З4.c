#include <stdio.h>
int main() {
float num1, num2;
char operator;
printf("Введіть перше число: ");
scanf("%f", &num1);
printf("Введіть друге число: ");
scanf("%f", &num2);
printf("Введіть операцію (+, -, *, /): ");
scanf("%c", &operator);
if (operator == '+') {
printf("%.2f%2f%.2f\n", num1, num2, num1 num2);
} else if (operator == '-') {
printf("%.2f%2f%.2f\n", num1, num2, num1 num2);
} else if (operator == '*') {
printf("%.2f %.2f %.2f\n", num1, num2, num1* num2);
} else if (operator == '/') {
if (num2 != 0) {
printf("%.2f/%.2f = %.2f\n", num1, num2, num1 num2);
} else {
printf("Помилка: Ділення на нуль!\n");
}
} else {
printf("Помилка: Невідома операція! \n");
}
return 0;
}