#include <iostream>

using std::cout;
using std::endl;

// int main() {
//   int  i =  2,  j =  4,  k =  8;
//   int *p = &i, *q = &j, *r = &k;

//   k = i;
//   cout << i << j << k << *p << *q << *r << endl;

//   p = q;
//   cout << i << j << k << *p << *q << *r << endl;

//   *q = *r;
//   cout << i << j << k << *p << *q << *r << endl;

//   return 0;
// }
int main() {
  int x = 5;
  int *p = &x;
  *p=6;
  int **q = &p;
  int ***r = &q;
  std::cout << *p << '\n' << p;
  std::cout << *q << '\n' << q;
  std::cout << *r << '\n' << r;
}