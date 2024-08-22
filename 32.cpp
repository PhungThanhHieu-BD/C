//�? quy trong C l� qu� tr�nh trong d� m?t phuong th?c g?i l?i ch�nh n� m?t c�ch li�n ti?p. M?t phuong th?c trong C g?i l?i ch�nh n� du?c g?i l� phuong th?c d? quy.

//C?u tr�c:

//kieu_tra_ve hamdequi() { 

//hamdequi(); /* goi lai chinh no */


//}

//int main() {

//hamdequi();

//}

//�

//H�m d? quy g?m 2 ph?n:

//�i?u ki?n tho�t kh?i d? quy

//C�c bu?c x? l� (th�n h�m) c� ch?a l?i g?i d? quy


#include "stdio.h"

int giaithua(int n){
	
	if (n==0 || n==1)
		return 1;
	else 
		return n*giaithua(n-1);
	
}


int main(){
	int n, gt;
	do{
		printf("Nhap vao n (n>=0): ");
		scanf("%d", &n);
	}while(n<0);
	
	gt = giaithua(n);
	printf("%d! = %d", n, gt);
	
}

/*
�o?n chuong tr�nh C n�y th?c hi?n vi?c t�nh giai th?a c?a m?t s? nguy�n kh�ng �m \( n \). Du?i d�y l� gi?i th�ch chi ti?t t?ng ph?n c?a chuong tr�nh:


#include "stdio.h"
- D�ng n�y bao g?m thu vi?n chu?n c?a C d? s? d?ng c�c h�m v�o/ra nhu `printf` v� `scanf`.
- ��y l� d?nh nghia c?a h�m `giaithua`, h�m n�y nh?n v�o m?t tham s? nguy�n \( n \) v� tr? v? giai th?a c?a \( n \).
  - `if (n==0 || n==1) return 1;`: N?u \( n \) b?ng 0 ho?c 1, h�m s? tr? v? 1 (v� giai th?a c?a 0 v� 1 d?u l� 1).
  - `else return n*giaithua(n-1);`: N?u \( n \) l?n hon 1, h�m s? tr? v? \( n \) nh�n v?i giai th?a c?a \( n-1 \). ��y l� c�ch t�nh d? quy c?a giai th?a.


- H�m `main` l� di?m b?t d?u c?a chuong tr�nh.
  - `int n, gt;`: Khai b�o hai bi?n nguy�n `n` v� `gt`. `n` s? luu gi� tr? nh?p v�o t? ngu?i d�ng, c�n `gt` s? luu k?t qu? giai th?a c?a `n`.
  - `do{ ... }while(n<0);`: V�ng l?p do-while n�y s? ti?p t?c y�u c?u ngu?i d�ng nh?p v�o m?t s? \( n \) cho d?n khi \( n \) kh�ng �m.
    - `printf("Nhap vao n (n>=0): ");`: In ra th�ng b�o y�u c?u ngu?i d�ng nh?p v�o gi� tr? \( n \).
    - `scanf("%d", &n);`: �?c gi� tr? nguy�n \( n \) t? ngu?i d�ng.
  - `gt = giaithua(n);`: G?i h�m `giaithua` d? t�nh giai th?a c?a \( n \) v� luu k?t qu? v�o bi?n `gt`.
  - `printf("%d! = %d", n, gt);`: In ra k?t qu? giai th?a c?a \( n \).


Chuong tr�nh y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n kh�ng �m \( n \) v� t�nh giai th?a c?a \( n \) b?ng c�ch s? d?ng h�m d? quy `giaithua`. K?t qu? s? du?c in ra m�n h�nh.
*/
