#include <stdio.h>
int main() {
char x = 255, y = 127;
printf("%u\n", (unsigned char)x & (unsigned char)y);
x = '(';
y = 17;
printf("%u\n", (unsigned char)x & (unsigned char)y);
y = 127;
printf("%u\n", (unsigned char)x & (unsigned char)y);
y = 128;
printf("%u\n", (unsigned char)x | (unsigned char)y);
return 0;
}