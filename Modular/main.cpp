#include <iostream>
#include "modular-arithmetic.hpp"

using namespace std;
int main()
{
  modularClass::setNumber(10);
  cout << sumModular(15, 3) << endl;
  cout << multiplyModular(15, 3) << endl;
  cout << subModular(15, 3) << endl;
  // n = 70450
  // ((180 sub 6801) ⊗ 12459) ⊗ (30260 ⊕ 70441 sub 967)
  modularClass::setNumber(70450);
  int first = multiplyModular(subModular(180, 6801), 12459);
  int second = subModular(sumModular(30260, 70441), 967);

  cout << multiplyModular(first, second) << endl;
  return 0;
}