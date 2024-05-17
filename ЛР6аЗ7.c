#include <stdio.h>
#include <math.h>
int main() {
float a, b, c;
float discriminant, root1, root2,
// Введения коефіцієнтів а, в, са клавіатури printf("Введіть коефіцієнти квадратного рівняния (а, b, c): "); scanf("%f %f %f", &a, &b, &c);
// Обчисления дискримінанту
discriminant bb4ac
// Перевірка дискримінанту
if (discriminant < 0) {
// Рілияния не має дійсних коренів
printf("Рівняння не має дійсних коренів.\n");
return 0; /
/ Вихід з програми
}
// Обчислення корени ршняния
root1=(-b sqrt(discriminant))/(2*a);
root2 (bsqrt(discriminant))/(2a);
// Вивід коренів рівняния
printf("Корені рівняния: %.21 1%.2f\n", root, root2);
return 0;
}