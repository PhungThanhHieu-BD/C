//Gi?i thi?u v? dãy s? Fibonnaci
//Fibonacci là dãy s? kinh di?n trong toán h?c du?c tìm th?y cách dây hon 800 nam. Ð?n nay các nhà khoa h?c phát hi?n nhi?u trùng h?p thú v? v? dãy s? này trong t? nhiên.
//Dãy Fibonacci là dãy vô h?n các s? t? nhiên b?t d?u b?ng 1 và 1, sau dó các s? ti?p theo s? b?ng t?ng c?a 2 s? li?n tru?c nó. C? th?, các s? d?u tiên c?a dãy Fibonacci là 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610…

//Tìm hi?u ?ng d?ng c?a dãy s? Fibonnaci: https://tuoitre.vn/day-so-fibonacci-va-nhung-bi-an-trong-tu-nhien-20180313151043875.htm

//Bài toán: Nh?p vào s? n, xu?t ra giá tr? Fibonacci F(n)

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
