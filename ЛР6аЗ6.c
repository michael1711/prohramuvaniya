#include <stdio.h>
#include <math.h>
int main() { float radius; float circumference, area; const float PI 3.14159;
// Запит радіусу від користувача printf("Введіть радіус круга: "); scanf("%f", &radius);
// Обчислення довжини кола та площі круга circumference 2 PI radius; area PI pow(radius, 2);
// Вивід результатів printf("Довжина кола: %.2f\n", circumference); printf("Площа круга: %.2f\n", area);
return 0;
}