#include <stdio.h>

unsigned int a = 3000000000;
char *ap = &a;

int main(){
	printf("Hex for int %x \n", a);
	for (int i =0; i<4; i++){
		printf("%hhx\n", *ap );
		ap++;
	}
	ap=&a;
	for (int i=0; i<4; i++){
		*ap+=1;
		ap+=1;
		printf("%x\n", a);
		printf("%d\n", a);
	}
	
	for (int i=0; i<4; i++){
		*ap+=16;
		ap+=16;
		printf("%x\n", a);
		printf("%d\n", a);
	}
	return 0;
}