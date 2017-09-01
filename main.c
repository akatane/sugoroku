/* main.c */

#include <stdio.h>
#include <stdlib.h>

char input[10];
int start;

int main(int argc, char **argv){
	printf("[1]START / [0]QUIT: ");
	while (1) {
		start = 0;
		if (fgets(input, sizeof(input), stdin) != NULL) {
			start = atoi(input);
		}
		if (start == 0) {
			break;
		}
		printf("\033[2J");
		sugoroku();
		printf("GAME OVER\n");
		printf("[1]RESTART / [0]QUIT: ");
	}
	return 0;
}
