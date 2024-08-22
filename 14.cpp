#include "stdio.h"
int main(){
	float a,b,x;
	printf("Nhap vao he so cua phuong trinh ax+b =0");
	printf("\na=");
	scanf("%f", &a);
	printf("\nb=");
	scanf("%f", &b);
	
	if(a!=0){
		x = -b/a;
		printf("\nPhuong trinh co nghiem x = %.2f", x);
	}else{
		if (b==0){
			printf("\nPhuong trinh co vo so nghiem");
		}else{
			printf("\nPhuong trinh vo nghiem");
		}
	}
}
