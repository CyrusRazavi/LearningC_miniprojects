#include <stdio.h>
#include <string.h>
#define s strcpy
struct game_gear {
	char armor[30];
	char weapon[30];
};
struct playerCard{
	char name[30];
	int level;
	int hp;
	struct game_gear gear; 	
};


int main(void){
	struct playerCard bean;
	s(bean.gear.armor,"iron");
	s(bean.gear.weapon,"sword");
	s(bean.name,"bean123");
	bean.level=12;
	bean.hp=200;
	printf("%s\n%s\n%s\n%d\n%d\n",bean.gear.armor,bean.gear.weapon,bean.name,bean.level,bean.hp);
	return 0;
}
