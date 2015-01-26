#include <stdio.h>
#include <stdlib.h>

int main() {
        int *memory_area1 = malloc(209715200);
	int i, j = 0;
	for (i = 0; i < 51200; i++) {
		memory_area1[j] = 1;
		j += 1024;
	}
	sleep(10);
	printf("200MB allocated\n");
	getchar();
	return 0;
}
