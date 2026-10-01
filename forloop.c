#include <stdio.h>
int main(void) {
int i;
for (i = 0; i++ < 3; ) {
printf("%d "
, i);
}
printf("| Final: %d"
, i);
return 0;
}