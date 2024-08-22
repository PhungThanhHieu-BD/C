#include "stdio.h"
struct point{
	float x;
	float y;
}

struct triangle{
	point a, b, c;
};

struct circle{
	point c;
	float r;
};

struct rectangle{
	point a, b, c, d;
};

struct polygon{
	point[100] ps;
	int n;
};

struct polygon2{
	point* ps;
};

struct date{
int day;
	int month;
	int year;
};

struct person{
	char[100] name;
	date dateOfBirth;
	float weight;
};

// person p1; p1.dateOfBirth.month;
struct person{
	char[100] name;
	struct date{
		int day;
		int month;
		int year;
	} dateOfBirth;
	float weight;	
};
