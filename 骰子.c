#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int a ;
 	srand(time(0));
 	a=(rand()%6)+1;
 	printf("你的骰子的點數是:%d\n", a);
	return 0;
}
