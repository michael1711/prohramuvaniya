#include <stdio.h>
int main() { int n = 1; printf("n=%d \n", n);
// Префіксний інкремент (++n) printf("prefix: ++n=%d\n", ++n);
// Постфіксний інкремент (n++) printf("postfix: n++=%d\n", n++);
// Після постфіксного інкремента
printf("after-postfix: n=%d\n", n);
// Префіксний декремент (-n) printf("prefix: -n=%d\n", --n);
// Постфіксний декремент (п--) printf("postfix: n--=%d\n", n--);
// Після постфіксного декремента printf("after-postfix: n=%d\n", n);
return 0;
}