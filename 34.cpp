//Gi?i thi?u v? d�y s? Fibonnaci
//Fibonacci l� d�y s? kinh di?n trong to�n h?c du?c t�m th?y c�ch d�y hon 800 nam. �?n nay c�c nh� khoa h?c ph�t hi?n nhi?u tr�ng h?p th� v? v? d�y s? n�y trong t? nhi�n.
//D�y Fibonacci l� d�y v� h?n c�c s? t? nhi�n b?t d?u b?ng 1 v� 1, sau d� c�c s? ti?p theo s? b?ng t?ng c?a 2 s? li?n tru?c n�. C? th?, c�c s? d?u ti�n c?a d�y Fibonacci l� 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610�

//T�m hi?u ?ng d?ng c?a d�y s? Fibonnaci: https://tuoitre.vn/day-so-fibonacci-va-nhung-bi-an-trong-tu-nhien-20180313151043875.htm

//B�i to�n: Nh?p v�o s? n, xu?t ra gi� tr? Fibonacci F(n)

//F(0) = 0

//F(1) = 1

//F(n) = F(n-1) + F(n-2)

 

#include "stdio.h"
int fibonacci(int x){
	if (x==0)
		return 0;
	else if (x==1)
		return 1;
	else
		return fibonacci(x-1)+fibonacci(x-2);	
}
int main(){
	int n;
	do {
		printf("Nhap vao so nguyen n = ");
		scanf("%d", &n);
	}while(n<0);
	
	printf("Fibonacci(%d) = %d", n, fibonacci(n));
}
