#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"
#include "utility.h"




int main() {

  struct Box b1;
  initBox(&b1, 9.0, 9.0, 4.0, 6.0);
  assertEquals("(9,9,4,6)", boxToString(b1), "pointToBox(b1)");

  initBox(&b1, 6.1234, 3.42556, 3.28878, 1.18908);
  assertEquals("(6.12,3.43,3.29,1.19)",  boxToString(b1), "boxToString(b1)");
  assertEquals("(6,3,3,1)",  boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("(6.123,3.426,3.289,1.189)", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("(6.1234,3.4256,3.2888,1.1891)",  boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("(6.1234,3.42556,3.28878,1.18908)",  boxToString(b1,6), "boxToString(b1,6)");

		   
  return 0;
}
