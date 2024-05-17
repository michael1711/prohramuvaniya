include <stdio.h>
// Визначення структури для інформації про працівника struct Employee { char name [50]; float weight; float height; int age;
};
int main() {
// Оголошення змінної типу структури Employee struct Employee emp;
// Введення інформації про працівника 5 клавіатури printf("Введіть ім'я працівника: ");
scanf("%s", emp.name); printf("Введіть вагу працівника: "); scanf("%f", &emp.weight); printf("Введіть зріст працівника: "); scanf("%f", &emp.height); printf("Введіть вік працівника: "); scanf("%d", &emp.age);
// Виведення інформації про працівника printf("\nІнформація про працівника (%5)\n", emp.name); printf(". \n");
printf("(Bara): %.2f\n", emp.weight); printf("(3picz) %.2f\n", emp.height); printf("(Вік): %d\n", emp.age);
}
return 0;