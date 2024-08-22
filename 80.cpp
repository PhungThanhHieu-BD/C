/*T�m t?t
Trong l?p tr�nh C, m?t c?u tr�c (ho?c struct) l� m?t t?p h?p c�c bi?n (c� th? c� nhi?u ki?u kh�c nhau) du?i m?t t�n duy nh?t.

C� ph�p c?a struct

struct structureName
 
{
 
dataType member1;
 
dataType member2;
 
�
 
};

V� d? v� khai b�o:
struct Person
 
{
 
char name[50];
 
int citNo;
 
float salary;
 
};
 
 
int main()
 
{
 
struct Person person1, person2, p[20];
 
return 0;

}
Ho?c:

struct Person
 
{
 
char name[50];
 
int citNo;
 
float salary;
 
} person1, person2, p[20];
*/
#include "stdio.h"

struct Date{
	int day;
	int month;
	int year;
};

void inputDate(struct Date &d){
	printf("Nhap vao ngay: ");
	scanf("%d", &d.day);
	printf("\nNhap vao thang: ");
	scanf("%d", &d.month);
	printf("\nNhap vao nam: ");
	scanf("%d", &d.year);
}

void printDate(struct Date d){
	printf("%d/%d/%d", d.day, d.month, d.year);
}

int checkDate(struct Date d){
	if (d.day<0 || d.month<0 || d.year <0)
		return 0;
	
	if(d.month>12)
		return 0;
		
	if (d.month==2){
		if(d.day>28)
			return 0;
	}
	
	if (d.month==1|| d.month==3 || d.month==5|| d.month==7|| d.month==8|| d.month==10|| d.month==12){
		if(d.day>31)
			return 0;
	}
	
	if(d.day>30)
		return 0;
	
	return 1;
}

int main(){
	struct Date myDate;
	inputDate(myDate);
	printf("\n---\n");
	printDate(myDate);
	printf("Kiem tra ngay hop le: %s", checkDate(myDate)==1?"HOP LE":"KHONG HOP LE");
	
}
