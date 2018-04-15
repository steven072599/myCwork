#include <stdio.h>
#include <stdlib.h>
#define LENGTH 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arr[LENGTH] = {5,10,8,2,-1};
void show_arr(void);
int main(int argc, char *argv[]) {
	int i,j,tmp;
	
	printf("未排序前的陣列:\n");
	show_arr();
	
	for(j=0;j<(LENGTH-1);j++){
		printf("經過第%d輪的比較後:\n",j);
		for(i=0;i<(LENGTH-j);i++){
			if(arr[i]>arr[i+1]){
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
			}
		}
		show_arr();
	} 
	
	system("PAUSE");
	return 0;
}
