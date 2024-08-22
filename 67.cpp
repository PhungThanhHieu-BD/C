/*
Tóm t?t
Trong l?p trình C, m?t chu?i là m?t m?ng các ký t? du?c k?t thúc b?ng ký t? null \0

Ví d?: char c[] = “lap trinh c”;

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

 

Cách khai báo:

char c[] = “text”;

 

char c[50] = “text”;

 

char c[] = {‘t’, ‘e’, ‘x’, ‘t’, ‘\0’};

 

char c[5] = {‘t’, ‘e’, ‘x’, ‘t’, ‘\0’};

 

Các luu ý:

Luu ý v? dung lu?ng m?ng: char c[4] = “text” => không d?, vì chu?i luôn có ký t? k?t thúc là \0

t

e

x

t

\0


 

Không h? tr? toán t? gán bên ngoài khai báo

char c[100];

c = “lap trinh c”;  // X?y ra l?i

Các hàm nh?p chu?i

 

scanf(“%s”, ten_mang); // ch? nh?p chu?i không ch?a kho?ng tr?ng

 

fgets(ten_mang, sizeof(ten_mang), stdin); // d?c m?t dòng bao g?m c? kho?ng tr?ng

Các hàm xu?t chu?i

printf(“%s”, ten_mang); // xu?t m?t m?ng ký t? ra màn hình


puts(ten_mang); // xu?t m?t m?ng ký t? ra màn hình + xu?ng dòng

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
