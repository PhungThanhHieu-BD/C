#include "stdio.h"
int main(){
	int x;
	float y;
	char c;
	
	// Nhap vao ky tu
	printf("\n Nhap vao ky tu: ");
	scanf("%c", &c);
	printf("\n Gia tri c vua nhap la: %c", c);
	
	// Nhap so nguyen
	printf("\n Nhap vao gia tri cua x: ");
	scanf("%d", &x);
	printf("\n Gia tri x da nhap la: %d", x);
	
	// Nhap vao so thuc
	printf("\n Nhap vao so thuc y: ");
	scanf("%f", &y);
	printf("\n Gia tri y vua nhap la: %.2f", y);
    
	
	// Nhap nhieu du lieu cung mot hang
	float x1, x2, x3;
	printf("Nhap vao gia tri cua x1, x2, x3");
	scanf("%f%f%f", &x1, &x2, &x3);
	printf("x1=%f, x2=%f, x3=%f", x1, x2, x3);
	
}
