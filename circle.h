#pragma once
#include <stdbool.h>

typedef struct point { //Point with the coordinates x, y
	int x;
	int y;
} point;

typedef struct circle { //Circle with the radius r and the center in the point p as described above
	point p;
	int r;
} circle;

void fiveCircles(circle c[]);
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);