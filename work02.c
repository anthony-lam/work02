#include <stdio.h>

unsigned int a = 3000000000;
char *ap = &a;

int main(){
	printf("Hex for int %x \n", a);
	return 0;
}