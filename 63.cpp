//�?a ch? bi?n:

//N?u b?n c� m?t bi?n var trong chuong tr�nh c?a b?n, &var s? cung c?p cho b?n d?a ch? c?a n� trong b? nh?.

//scanf(�%d�, &var);

//printf(�address of var: %p�, &var);

//Con tr? C

//Con tr? (bi?n con tr?) l� c�c bi?n d?c bi?t du?c s? d?ng d? luu tr? d?a ch? hon l� gi� tr?.

//C�ch khai b�o:

//int* p;

//int *p1;

//int* p1, p2; // khai b�o m?t con tr? p1 v� m?t bi?n b�nh thu?ng p2.
//C�ch g�n d?a ch? v� l?y d? li?u Con tr?

//V� d?:

//int* pc, c;

//c = 5;

// C�ch g�n d?a ch?

//pc = &c;

// L?y gi� tr?

//printf(�%d�, *pc); // Output: 5

// C�ch g�n gi� tr?

//c = 1;

//printf(�%d�, c); // Output: 1

//printf(�%d�, *pc); // Ouptut: 1

// C�ch g�n gi� tr? 2

//*pc = 1;

//printf(�%d�, *pc); // Ouptut: 1printf(�%d�, c); // Output: 1

#include "stdio.h"

int main(){
	// Dia chi bien
	int var;
	printf("Nhap var = ");
	scanf("%d", &var);
	printf("\n Gia tri cua var = %d", var);
	printf("\n Dia chi cua bien var trong bo nho la: %p", &var);
	
	int *pc, c;
	c = 5;
	pc = &c;
	printf("\n Gia tri cua c la: %d", *pc);
	printf("\n Dia chi cua bien c la: %p", pc);
	
	*pc = 1;
	printf("\n Gia tri cua c la: %d", c);
	printf("\n Gia tri cua *pc la: %d", *pc);
}
