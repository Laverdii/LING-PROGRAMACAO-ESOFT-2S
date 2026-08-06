#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, r1, r2, r3;
	a = 8;
	b = 19;
	c = a + b;
	r1 = a - b;
	r2 = a/b;
	r3 = a*b;
	
	printf("As operações de %d %d são: +%d -%d /%d *%d", a, b, c, r1, r2, r3);
	
	return 0;
}
