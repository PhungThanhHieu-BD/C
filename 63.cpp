//Ð?a ch? bi?n:

//N?u b?n có m?t bi?n var trong chuong trình c?a b?n, &var s? cung c?p cho b?n d?a ch? c?a nó trong b? nh?.

//scanf(“%d”, &var);

//printf(“address of var: %p”, &var);

//Con tr? C

//Con tr? (bi?n con tr?) là các bi?n d?c bi?t du?c s? d?ng d? luu tr? d?a ch? hon là giá tr?.

//Cách khai báo:

//int* p;

//int *p1;

//int* p1, p2; // khai báo m?t con tr? p1 và m?t bi?n bình thu?ng p2.
//Cách gán d?a ch? và l?y d? li?u Con tr?

//Ví d?:

//int* pc, c;

//c = 5;

// Cách gán d?a ch?

//pc = &c;

// L?y giá tr?

//printf(“%d”, *pc); // Output: 5

// Cách gán giá tr?

//c = 1;

//printf(“%d”, c); // Output: 1

//printf(“%d”, *pc); // Ouptut: 1

// Cách gán giá tr? 2

//*pc = 1;

//printf(“%d”, *pc); // Ouptut: 1printf(“%d”, c); // Output: 1

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
