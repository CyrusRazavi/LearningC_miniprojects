#include <stdio.h>
#define EXIT_SUCCESS 0
void logic(int lenght,int width){
	int total_area=lenght*width;
	printf("total area is %d", total_area);

}

int main(void){
	logic(2,5);
	return EXIT_SUCCESS;
}
