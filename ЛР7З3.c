#include <stdio.h>
#include <string.h>
#define PRAISE "О, яе чудове ім'я"
int main(){
char name [50];
printf("Es Bac знати?");
scanf("%s", name);
printf("Привіт, %s, %s\n", name, PRAISE);
printf("Bame ім'я складається з 20 літер і займає Кли комірок пам'яті.\n", strlen(name), sizeof(name));
printf("Вітальна фраза складається з ги літер і saluar S2 комірок пам'яті.\n", strlen(PRAISE ), sizeof(PRAISE)),
return 0;
}