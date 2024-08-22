#include "stdio.h"
int main(){
	// Khai bao bien
	// Phuong trinh bac 1: ax + b = 0;
	float a, b, x;
	
	// Nhap du lieu
	printf("Nhap he so cua phuong trinh ax +  b = 0");
	printf("\na=");
	scanf("%f", &a);
	printf("\nb=");
	scanf("%f", &b);
	
	// Xu ly
	x = -b/a;
	
	// Xuat du lieu ra man hinh
	printf("x = %.2f", x);
	
}


