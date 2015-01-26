#include <stdio.h>
#include <stdlib.h>

int main() {
        int *memory_area1 = malloc(819200000);
        int i, j = 0;

        for (i = 0; i < 200000; i++) {
                /* write per 4kB, 1024*4byte */
                memory_area1[j] = 1;
                j += 1024;
        }

	printf("800MB allocated\n");
	sleep(10);
	getchar();
	return 0;
}
