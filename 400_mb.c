#include <stdio.h>
#include <stdlib.h>

int main() {
	int *memory_area1 = malloc(419430400);
	int i, j = 0;
	for (i = 0; i < 102400; i++) {
		memory_area1[j] = 1;
		j += 1024;
	}
	printf("400MB allocated\n");
	sleep(10);
	getchar();
	return 0;
}
