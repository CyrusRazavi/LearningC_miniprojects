#include <stdio.h>
int main(void){
	struct entity{
		int health;
		int weapon;
	};
	struct entity goblin;
	goblin.health=20;
	printf("the goblin health is at %d",goblin.health);
	return 0;
}
