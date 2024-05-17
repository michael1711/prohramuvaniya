#include <stdio.h>
int main() {
int intValue 10.
float floatValue 3.14;
char charValue 'A':
long longValue 1234567890,
// Вплив модифікаторів специфікації перетворения
printf("Ціле число (int) 5d\n", intValue).
printf("Ціле число (175), знаковий: %d\n", intValue);
printf("Ціле число (17t), знаковий, відступ: %d\n", intValue);
printf("Ціле число (101), ширина поля: %5d\n", intValue);
printf("Ціле число (115), виправления ширина полs: %-5d\n", intValue),
printf("Ціле число (111), ширина поля, виправления знаку %-5d\n", intValue);
printf("Ціле число (int), ширина поля, виправления знаку 05d\n", intValue);
printf("\nЧисло плаваючою крапкою (float): Sfin", floatValue); printf("Число з плаваючою крапково (float), науковий формат: We\n", floatValue); printf("Число з плаваючою крапково (float), ширина поля: %10.2f\n", floatValue);
printf("\nCauвол (char): Sc\n", charValue);
printf("\nДовге ціле число (Long): %ld\n", longValue);
printf("Довге ціле число (long), відмітка про знак: 5-10\n", longValue),
printf("Довге ціле число (long), ширина поля: %101d\n", longValue),
return 0;