#include <stdio.h>
#include <math.h>
double factorial(int n) {
double fact = 1.0;
for (int i=1; i<n; i++) {
fact = 1;
}
return fact;
}
int main() {
double x;
printf("Введіть значення х (0 <= x <= π/2): ");
scanf("%lf", &x);
double taylor_sin = 0.0;
double library_sin sin(x);
int iterations = 0;
double accuracy = 0.00001;
for (int n = 0;; n++) {
double term pow(-1, n) pow(x, 2n 1) / factorial(2n 1);
taylor_sin += term;
iterations++;
if (fabs(library_sin taylor_sin) accuracy) {
break;
}
printf("Значення синуса (бібліотечне): %lf\n", library_sin); printf("Значення синуса (ряд Тейлора): %lf\n", taylor_sin); printf("Кількість ітерацій: %d\n", iterations);
}
return 0;