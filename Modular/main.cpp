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
  // ((180 sub 6801) mult 12459) mult (30260 sum 70441 sub 967)
  modularClass::setNumber(70450);
  int first = multiplyModular(subModular(180, 6801), 12459);
  int second = subModular(sumModular(30260, 70441), 967);

  cout << multiplyModular(first, second) << endl;
  
  modularClass::setNumber(2047);
  cout << inverseModular(1507) << endl;

  modularClass::setNumber(15);
  cout << divModular(5, 6) << endl;
  cout << divModular(7, 13) << endl;
  return 0;
}
