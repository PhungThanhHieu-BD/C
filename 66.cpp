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
//end
