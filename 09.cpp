#include "stdio.h"
int main(){
	// Khai bao bien
	int a, b, min, max;
	
	// Nhap du lieu
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("Nhap vao b = ");
	scanf("%d", &b);
	
	// Xu ly
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	
	// Xuat du lieu
	printf("\n MAX = %d", max);
	printf("\n MIN = %d", min);	

}
