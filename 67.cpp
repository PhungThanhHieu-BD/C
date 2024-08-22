/*
T�m t?t
Trong l?p tr�nh C, m?t chu?i l� m?t m?ng c�c k� t? du?c k?t th�c b?ng k� t? null \0

V� d?: char c[] = �lap trinh c�;

l

a

p

t

r

i

n

h

c

\0

 

C�ch khai b�o:

char c[] = �text�;

 

char c[50] = �text�;

 

char c[] = {�t�, �e�, �x�, �t�, �\0�};

 

char c[5] = {�t�, �e�, �x�, �t�, �\0�};

 

C�c luu �:

Luu � v? dung lu?ng m?ng: char c[4] = �text� => kh�ng d?, v� chu?i lu�n c� k� t? k?t th�c l� \0

t

e

x

t

\0


 

Kh�ng h? tr? to�n t? g�n b�n ngo�i khai b�o

char c[100];

c = �lap trinh c�;  // X?y ra l?i

C�c h�m nh?p chu?i

 

scanf(�%s�, ten_mang); // ch? nh?p chu?i kh�ng ch?a kho?ng tr?ng

 

fgets(ten_mang, sizeof(ten_mang), stdin); // d?c m?t d�ng bao g?m c? kho?ng tr?ng

C�c h�m xu?t chu?i

printf(�%s�, ten_mang); // xu?t m?t m?ng k� t? ra m�n h�nh


puts(ten_mang); // xu?t m?t m?ng k� t? ra m�n h�nh + xu?ng d�ng

*/

#include "stdio.h"
#include "stdlib.h"
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	//int* ptr = (int*)malloc(n*sizeof(int));
	int* ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("\nError: Khong cap phat duoc vung nho");
		return 0;
	}
	
	for(int i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", ptr+i);
	}
	
	// Xuat mang
	for(int i=0; i<n; i++){
		printf("%d ", *(ptr+i));
	}
	
	int x;
	printf("\nKich co mang muon thay doi la: ");
	scanf("%d", &x);
	realloc(ptr, x);
	
	
	// Xuat mang
	printf("\n");
	for(int i=0; i<x; i++){
		printf("%d ", *(ptr+i));
	}
	
	free(ptr);
}
