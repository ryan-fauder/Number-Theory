#include <iostream>
#include "modular-arithmetic.hpp"
#include "gcd-euclidian.hpp"
#include <vector>
using namespace std;

void vecprintf(std::vector<int> vector1, int size){
  for (int i = 0; i < size; i++)
  {
    cout << vector1[i] << " ";
  }
  cout << endl;
}

int main()
{
  int count = 0;

  cout << "Case " << ++count << ": " << endl;
  modularClass::setNumber(10);
  cout << sumModular(15, 3) << endl; // 8
  cout << multiplyModular(15, 3) << endl; // 5
  cout << subModular(15, 3) << endl; // 2

  cout << "Case " << ++count << ": " << endl;
  // n = 70450
  // ((180 sub 6801) mult 12459) mult (30260 sum 70441 sub 967)
  modularClass::setNumber(70450);
  int first = multiplyModular(subModular(180, 6801), 12459);
  int second = subModular(sumModular(30260, 70441), 967);
  cout << multiplyModular(first, second) << endl;
  
  cout << "Case " << ++count << ": " << endl;
  // Testing modular multiplicative inversion
  modularClass::setNumber(2047);
  cout << inverseModular(1507) << endl;

  cout << "Case " << ++count << ": " << endl;
  // Testing one solution modular division
  modularClass::setNumber(15);
  cout << divModular(5, 6) << endl;
  cout << divModular(7, 13) << endl;

  cout << "Case " << ++count << ": " << endl;
  // Testing modular division to get all solutions
  int size;
  std::vector<int> solutions;

  modularClass::setNumber(8);
  cout << divModular(2, 6) << endl; // Doesnt work, it has more than one solution.
  cout << firstDivModular(2, 6) << endl; // It get the fisrt solution, even if it has more than one
  size = allDivModular(2, 6, solutions);
  vecprintf(solutions, size);
  

  cout << "Case " << ++count << ": " << endl;
  // Testing modular division with no solutions
  modularClass::setNumber(2021);
  cout << divModular(301, 1519) << endl;
  size = allDivModular(301, 1519, solutions);
  vecprintf(solutions, size);

  return 0;
}
