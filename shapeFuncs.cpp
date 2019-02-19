#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"
#include <cmath>

// Compute distance between two points

double distanceBetween(Point p, Point q) 
{
    double e1 = q.x - p.x;
    double e2 = q.y - p.y;
    double d = sqrt(pow(e1,2) + pow(e2,2));
	return d;
}

 
// The function initPoint below illustrates passing a struct by pointer.
// Inside this function:
//  p   is the address of the struct Point
// (*p) refers to the struct Point itself (we dereference the pointer)
// (*p).x refers to the x member of the point
// (*p).y refers to the y member of the point
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initPoint(struct Point *p, double xVal, double yVal) 
{
	(*p).x = xVal;
	(*p).y= yVal;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  
  // SAMPLE FORMAT: ul=(3.4,-5),w=5,h=7
  
  return "stub!"; // TODO: Delete this line and comment and replace with appropriate code
}
 


bool pointsApproxEqual(Point p1, 
		       Point p2, 
		       double tolerance) {

  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) 
{
	if (approxEqual(b1.ul.x, b2.ul.x) < tolerance
	    && approxEqual(b1.ul.y, b2.ul.y) < tolerance)
	{
		if (approxEqual(b1.width, b2.width) < tolerance 
		    && approxEqual(b1.height, b2.height) < tolerance)
		{
			return true;
		}
	}return false;
}

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
	(*b).ul.x = ulx;
	(*b).ul.y = uly;
	(*b).width = w;
	(*b).height = h;
}

double areaOfBox(Box b) 
{
  return b.width * b.height; 
}
