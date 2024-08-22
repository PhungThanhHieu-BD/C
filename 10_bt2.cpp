// Bai tap 2
#include "stdio.h"
int main(){
	// ax + b = 0;
	float a, b;
	
	// Nhap du lieu
	printf("Nhap vao he so a, b cua phuong trinh ax + b = 0");
	printf("\n a= ");
	scanf("%d", &a);
	printf("\n b= ");
	scanf("%d", &b);
	
	// Xu ly va xuat du lieu
	// Neu a != 0 => x = -b/a; 
	// Neu a == 0 => TH1: b == 0 => "Vo so nghiem"; Nguoc lai TH1 b != 0 => "Vo nghiem"
	printf("%s", a);
	
	
}
