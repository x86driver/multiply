#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	if (argc != 4) {
		printf("Usage: %s [from...] [end...] [result]\n", argv[0]);
		exit(1);
	}

	unsigned int from = atoi(argv[1]);
	unsigned int end = atoi(argv[2]);
	unsigned int result = atoi(argv[3]);
	unsigned int i, j, tmp;

//	end = sqrt(result);
	printf("Calculating ...\n");
	for (i = from; i < sqrt(result); ++i) {
		for (j = from; j < end; ++j) {
			tmp = i * j;
			if (tmp == result)
				printf("%d * %d = %d\n", i, j, tmp);
		}
	}

	return 0;
}
