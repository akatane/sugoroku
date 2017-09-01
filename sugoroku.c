/* sugoroku.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char input[10];
int dice;
int totalSquare;
int remainSquare;
int roll;

int sugoroku(){
	/* initialize random seed */
	srandom((unsigned int)time(NULL));

	/* initialize total square (41 - 50) */
	totalSquare = random() % 10 + 41;
	printf("今回のマス数: %d\n", totalSquare);

	/* initialize remain square */
	remainSquare = totalSquare;


	/* goal */
	while (remainSquare > 0) {
		printf("ゴールまで %d マスです。\n", remainSquare);

		/* display player */
		printf("あなたの番です。\n");

		/* roll dice (1 - 6) */
		printf("[1]サイコロをふる／[0]やめる: ");
		roll = 0;
		if (fgets(input, sizeof(input), stdin) != NULL) {
			roll = atoi(input);
		}
		if (roll == 0) {
			return 1;
		}
		dice = random() % 6 + 1;
		printf("%d が出ました。\n", dice);

		/* set remain square */
		remainSquare -= dice;
	}
	printf("ゴール！\n");

	return 0;
}
