#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int i,j,state;
	i = 2;
	while(i<500){             //判斷質數 
		state = 0;            //state=0代表質數 
		j = 2;
		while(j<=i-1){
			if((i&j)==0){
				state = 1;
			}
			j++;
		}
		if(state == 0){
			printf("%d\n",i);
		}
		i++;
	}
	int i = 2, num, state = 0;
	printf("請輸入一個數:");
	scanf("%d",&num);
	while(i<=(num-1)){
		if((num%i) == 0){
			state = 1; 
		}
		i++;
	}
	if(state){
		printf("%d不是質數\n",num);
	}else{
		printf("%d是質數\n",num);
	}
	int i,j,state;
	for(i=2;i<=500;i++){
		state = 0;
		for(j=2;j<=i-1;j++){
			if((i&j)==0){
				state = 1;
			}
		}
		if(state == 0){
			printf("%d\n",i);
		}
	}
	int i=1;
	int sum=0;
	
	while(i<=100){
		if((i%3 == 0) && (i%9 == 0)){
			printf("%d\n",i);
			sum=sum+1;
		}
		i++;
	} 
		printf("\n");
		printf("i=%d\n",sum);
*/
	int i = 1;
	float tmp, sum = 0;
	while(i<=10){
		tmp = 1.0/i;
		sum += tmp;
		printf("tmp = %.4f\n",tmp);
		printf("i = %d\tsum = %.4f\n",i,sum);
		i++;
	}
	printf("sum = %.4f\n",sum);
	system("PAUSE");
	return 0;
	}
