#include <iostream>
using namespace std;

#include <cassert>
#include "Rectangle.h"

int main() {

  // Testing with ints
  {
    Rect<int> rectangle;

    rectangle.setWidth(4);
    rectangle.setLength(3);

    assert(!rectangle.lengthGreater());
    assert(rectangle.area() == 12);
    assert(rectangle.perimeter() == 14);
  }

  // now test with a float or double

  cout << "All tests passed!" << endl;

}