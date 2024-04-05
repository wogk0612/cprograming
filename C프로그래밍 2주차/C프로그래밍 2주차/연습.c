#include <stdio.h>
#pragma warning(disable:4996)

int main(){

	int N=0;

	while (N >= 0) {
		scanf("%d", &N);

		if (N % 4 == 0) {
			if (N % 100 == 0) {
				if (N % 400 == 0) {
					printf("leap year\n");
				}
				else
					printf("common year\n");
			}
			else
				printf("leap year\n");
		}
		else
			printf("common year\n");
	}
	return 0;

}

