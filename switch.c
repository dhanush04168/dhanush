#include <stdio.h>
int main() {
int x = 2;
switch (x) {
case 1: printf("One ");
case 2: printf("Two ");
case 3: printf("Three ");
case 4: printf("Four ");
break;
default: printf("Default");
}
return 0;
}