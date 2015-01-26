#include <stdio.h>
#include <stdlib.h>

int main() {
        int *memory_area1 = malloc(819200000);
	int *memory_area2 = malloc(819200000);
        int i, j = 0;

        for (i = 0; i < 200000; i++) {
                /* write per 4kB, 1024*4byte */
                memory_area1[j] = 1;
                j += 1024;
        }
	j = 0;
	printf("800MB allocated\n");
	sleep(10);
	for (i = 0; i < 200000; i++) {
		memory_area2[j] = 1;
		j += 1024;
	}
	printf("Second 800MB allocated\n");
	sleep(10);

	getchar();
	return 0;
}
