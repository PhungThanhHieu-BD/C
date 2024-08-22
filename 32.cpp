//Ð? quy trong C là quá trình trong dó m?t phuong th?c g?i l?i chính nó m?t cách liên ti?p. M?t phuong th?c trong C g?i l?i chính nó du?c g?i là phuong th?c d? quy.

//C?u trúc:

//kieu_tra_ve hamdequi() { 

//hamdequi(); /* goi lai chinh no */


//}

//int main() {

//hamdequi();

//}

//—

//Hàm d? quy g?m 2 ph?n:

//Ði?u ki?n thoát kh?i d? quy

//Các bu?c x? lý (thân hàm) có ch?a l?i g?i d? quy


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
Ðo?n chuong trình C này th?c hi?n vi?c tính giai th?a c?a m?t s? nguyên không âm \( n \). Du?i dây là gi?i thích chi ti?t t?ng ph?n c?a chuong trình:


#include "stdio.h"
- Dòng này bao g?m thu vi?n chu?n c?a C d? s? d?ng các hàm vào/ra nhu `printf` và `scanf`.
- Ðây là d?nh nghia c?a hàm `giaithua`, hàm này nh?n vào m?t tham s? nguyên \( n \) và tr? v? giai th?a c?a \( n \).
  - `if (n==0 || n==1) return 1;`: N?u \( n \) b?ng 0 ho?c 1, hàm s? tr? v? 1 (vì giai th?a c?a 0 và 1 d?u là 1).
  - `else return n*giaithua(n-1);`: N?u \( n \) l?n hon 1, hàm s? tr? v? \( n \) nhân v?i giai th?a c?a \( n-1 \). Ðây là cách tính d? quy c?a giai th?a.


- Hàm `main` là di?m b?t d?u c?a chuong trình.
  - `int n, gt;`: Khai báo hai bi?n nguyên `n` và `gt`. `n` s? luu giá tr? nh?p vào t? ngu?i dùng, còn `gt` s? luu k?t qu? giai th?a c?a `n`.
  - `do{ ... }while(n<0);`: Vòng l?p do-while này s? ti?p t?c yêu c?u ngu?i dùng nh?p vào m?t s? \( n \) cho d?n khi \( n \) không âm.
    - `printf("Nhap vao n (n>=0): ");`: In ra thông báo yêu c?u ngu?i dùng nh?p vào giá tr? \( n \).
    - `scanf("%d", &n);`: Ð?c giá tr? nguyên \( n \) t? ngu?i dùng.
  - `gt = giaithua(n);`: G?i hàm `giaithua` d? tính giai th?a c?a \( n \) và luu k?t qu? vào bi?n `gt`.
  - `printf("%d! = %d", n, gt);`: In ra k?t qu? giai th?a c?a \( n \).


Chuong trình yêu c?u ngu?i dùng nh?p vào m?t s? nguyên không âm \( n \) và tính giai th?a c?a \( n \) b?ng cách s? d?ng hàm d? quy `giaithua`. K?t qu? s? du?c in ra màn hình.
*/
