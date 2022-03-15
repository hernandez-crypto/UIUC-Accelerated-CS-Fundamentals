/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int *x;
  int size = 3;
  x = new int[size];
  cout << x << '\n';
  cout << *x << '\n';
  cout << &x << '\n';

  for (int i = 0; i < size; i++) {
    cout << x[i] << '\n';
    x[i] = i + 3;
    cout << x[i] << '\n';
  }

  delete[] x;
}
