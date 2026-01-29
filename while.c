#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int diceroll=0;
int main(void){
	while(diceroll < 6){
		sleep(1);
		srand(time(NULL));
		diceroll=(rand()%6)+1;
		printf("you got a %d\n",diceroll);
		if(diceroll==6){
			printf("yatzzy!!");
		}
}
	return 0;
}
