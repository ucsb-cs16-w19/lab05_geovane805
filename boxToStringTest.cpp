#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box p1,p2;

  initBox(&p1,3.0,4.0,5.0,7.0); 
  assertEquals("ul=(3,4),w=5,h=7", boxToString(p1), "boxToString(p1)");

  initBox(&p2,3.14159,6.2831853071,5.14159,7.2831853071);
  assertEquals("ul=(3.14,6.28),w=5.14,h=7.28", boxToString(p2), "boxToString(p2)");
  assertEquals("ul=(3,6),w=5,h=7", boxToString(p2,1), "boxToString(p2,1)");
  assertEquals("ul=(3.142,6.283),w=5.142,h=7.283", boxToString(p2,4), "boxToString(p2,4)");
  assertEquals("ul=(3.1416,6.2832),w=5.1416,h=7.2832", boxToString(p2,5), "boxToString(p2,5)");

  return 0;
}
