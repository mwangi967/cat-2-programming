//Array in c-2d arrays
#include<stdio.h>
int main(){
	int t;
	int r;
	int scores[2][2] =  {{85,90},{78,88}};
	for(t=0;t<2;t++){
	for(r=0;r<2;r++){
	printf("scores[%d][%d] = %d \n",t,r,scores[t][r]);
	}
	}
return 0;			
}