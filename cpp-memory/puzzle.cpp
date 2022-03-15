/**
 * C++ code showing improper use of memory (returning a reference to a stack variable).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

double someOtherFunction();  // Forward decl

#include <iostream>
#include "Cube.h"
using std namespace;
using uiuc::Cube;

Cube *CreateUnitCube() {
  Cube cube;
  cube.setLength(15);
  return &cube;
}

int main() {
  Cube *c = CreateUnitCube();
  someOtherFunction();
  double a = c->getSurfaceArea();
  cout << "Surface Area: " << a << endl;
  double v = c->getVolume();
  cout << "Volume: " << v << endl;
  return 0;
}


// Some other function that does something that uses some stack memory.
// In this code, we calculate the total volume of cubes of length from 0..99.
double someOtherFunction() {
  Cube cubes[100];
  double totalVolume = 0;

  for (int i = 0; i < 100; i++) {
    cubes[i].setLength(i);
    totalVolume += cubes[i].getVolume();
  }

  return totalVolume;
}