/*
T�m t?t

SinhVien

C�c h�m

int id;

char ten[50];

char gioiTinh[5];

date ngaySinh;

int tuoi;

float diemMon1;

float diemMon2;

float diemMon3;

float diemTrungBinh;

char hocLuc[10];

char maLop[30];

void nhapSinhVien(SV &sv);

void inSinhVien(SV sv);

void tinhTuoi(SV &sv);

void tinhDiemTrungBinh(SV *sv)

void xepLoai(SV &sv);

void capNhatSinhVien(SV &sv);

void nhapDanhSachSinhVien(SV ds[], int &n);

void xuatDanhSachSinhVien(SV ds[], int n);

float timMax_DiemTrungBinh(SV ds[], int n);

int timMin_Tuoi(SV ds[], int n);

void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);

void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);

int timSinhVienTheoTen(SV ds[], int n, char ten[]);

void xoaSinhVienTheoId(SV ds[], int &n, char ten[]);

void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);

void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);
*/

#include "stdio.h"
#include "string.h"
#include "time.h"

struct date{
	int ngay;
	int thang;
	int nam;
};

struct SinhVien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};
typedef SinhVien SV;



void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
void tinhTuoi(SV &sv);
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, char ten[]);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
	printf("\nNgay sinh"); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	printf("\nDiem Mon 1: "); scanf("%f", &sv.diemMon1);
	printf("\nDiem Mon 2: "); scanf("%f", &sv.diemMon2);
	printf("\nDiem Mon 3: "); scanf("%f", &sv.diemMon3);
	printf("\nMa Lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}

void inSinhVien(SV sv){
	printf("%5d \t %20s \t %10s \t %2d/%d/%d \t %10d \t %6.2f \t %6.2f \t %6.2f \t %6.2f \t %5s \t %10s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm* NOW = localtime(&TTIME);
	int namHienTai = NOW->tm_year+1900;
	sv.tuoi = namHienTai - sv.ngaySinh.nam;
}


void tinhDiemTrungBinh(SV *sv){
	sv->diemTrungBinh = (sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
}

void xepLoai(SV &sv){
	if(sv.diemTrungBinh>9){
		strcpy(sv.hocLuc, "XUAT SAC");
	}else if(sv.diemTrungBinh>8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTrungBinh>7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTrungBinh>5){
		strcpy(sv.hocLuc, "TRUNG BINH");
	}else{
		strcpy(sv.hocLuc, "YEU");
	}
	
}

void capNhatSinhVien(SV &sv){
	nhapSinhVien(sv);
	tinhTuoi(sv);
	tinhDiemTrungBinh(&sv);
	xepLoai(sv);
}
int main(){
	SV sv1;
	capNhatSinhVien(sv1);
	printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
	printf("\n");
	inSinhVien(sv1);
}
