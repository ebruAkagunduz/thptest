#include <stdio.h>
#include <stdlib.h>

int main() {
        int *memory_area1 = malloc(819200000);
	int *p;

        int i, j = 0;
        for (i = 0; i < 200000; i++) {
		/* write per 4kB, 1024*4byte */
                memory_area1[j] = 1;
                j += 1024;
        }

        printf("First 800MB allocated\n");
	sleep(10);
	printf("After 600 seconds start to read first area\n");
	sleep(600);
	printf("Ten seconds ..\n");
	sleep(10);
	printf("Starting..\n");
	/* read or write every integer to do swapped in */

	for (i = 0; i < 100000; i++) {
		/* 1024*4bytes = 4kB read */
		*p = *memory_area1;
		memory_area1 += 1024;
		/* 1024*4bytes = 4kB write */
		*memory_area1 = 1;
		memory_area1 += 1024;
	}
	printf("Read is completed\n");
        getchar();
        return 0;
}
