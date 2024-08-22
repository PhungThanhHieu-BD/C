#include "stdio.h"
#include "math.h"
int main(){
	int a, b, USCLN;
	
	printf("Nhap vao 2 so nguyen a b: ");
	scanf("%d%d", &a, &b);
	
	a = abs(a);
	b = abs(b);
	// TH1
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
		//TH2
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;	
	}
	
	printf("USCLN = %d", USCLN);
}
