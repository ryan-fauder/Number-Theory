#include <iostream>
#include "modular-arithmetic.hpp"
#include "gcd-euclidian.hpp"
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

  modularClass::setNumber(8);
  cout << divModular(2, 6) << endl;
  modularClass::setNumber(144);
  cout << divModular(132, 48) << endl;
  modularClass::setNumber(2021);

  int s, t;
  cout << gcd_visualization(2021, 301) << endl;
  cout << gcd_extended(2021, 301, s, t) << endl;
  cout << s << " " << t <<endl;
  cout << divModular(893, 1519) << endl;
  cout << divModular(301, 1519) << endl;

  modularClass::setNumber(7980);
  cout << sumModular(7581, 0) << endl;
  cout << sumModular(5061, 4940) << endl;

  modularClass::setNumber(50);
  cout << modularClass::getNumber() << endl;
  cout << absModular(101) << endl;
  return 0;
}
