/* sugoroku.c */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sugoroku(){
	srandom((unsigned int)time(NULL));

	int dice = rollDice();
	printf("さいころの目は %d でした\n", dice);

	return 0;
}

int rollDice(){
	int dice = random() % 6 + 1;
	return dice;
}
