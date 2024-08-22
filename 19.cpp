#include "stdio.h"
#include "math.h"
int main(){
	// khai bao
	float xa, ya, xb, yb, xc, yc;
	float AB, BC, CA;
	float chuvi, dientich, p;
	
	// nhap lieu
	printf("\nNhap vao toan do dinh A: ");
	scanf("%f%f", &xa, &ya);
	printf("\nNhap vao toan do dinh B: ");
	scanf("%f%f", &xb, &yb);
	printf("Nhap vao toan do dinh C: ");
	scanf("%f%f", &xc, &yc);
	
	// xu ly va xuat ket qua
	
	// Tinh do dai cac canh cua tam giac
	AB = sqrt(pow(xa-xb, 2) + pow(ya-yb, 2));
	BC = sqrt(pow(xb-xc, 2) + pow(yb-yc, 2));
	CA = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
	
	printf("\nAB = %.2f, BC=%.2f, CA=%.2f", AB, BC , CA );
	
	if (AB+BC > CA && AB+CA> BC && BC+CA>AB){
		printf("\nABC tao thanh tam giac");
		
		// Kiem tra tam giac can
		if(AB ==  BC || AB == CA || BC == CA){
			printf("\nABC la tam giac can");
		}else{
			printf("\nABC khongla tam giac can");
		}
		
		// Tinh chu vi
		chuvi = AB + BC + CA;
		printf("\n Chu vi tam giac ABC la: %.2f", chuvi);
		
		// Tinh dien tich
		p = chuvi/2;
		dientich = sqrt(p*(p-AB)*(p-BC)*(p-CA));
		printf("\n Dien tich tam giac ABC la: %.2f", dientich);
		
	} else{
		printf("\nABC khongtao thanh tam giac");
	}
}
