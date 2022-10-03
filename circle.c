#include <malloc.h>
#include "circle.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/

for(int i; i<5; i++){ //Goes through the circles one by one and sets the value of their respective x, y, r
	c[i].p.x = i; //Sets the value of x in point
	c[i].p.y = i; //Sets the value of y in point
	c[i].r = i; //Sets the value of r in circle
}
}

bool circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
if (c -> r > 0){ //Checks if the value of r is less than 0, if true or false return that
	return true;}
else {
	return false;}
}

void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/
c -> p.x = (c -> p.x) + (p -> x); //Sets the value of x in c to be equal to the sum of x in c and x in p
c -> p.y = (c -> p.y) + (p -> y); //Sets the value of y in c to be equal to the sum of y in c and x in p
}