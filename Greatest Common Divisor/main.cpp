#include <bits/stdc++.h>
#include "Euclides-Algorithm.hpp"
using namespace std;

void testing_case(int index, int testing, int expected);

int main(){
  int count = 0;
  testing_case(++count, gcd_recursive(32, 6), 2);
  testing_case(++count, gcd_recursive(1232, 200), 8);
  testing_case(++count, gcd_recursive(30, 165), 15);
  testing_case(++count, gcd_recursive(2, 3), 1);

  testing_case(++count, gcd_iterative(32, 6), 5);
  testing_case(++count, gcd_iterative(1232, 200), 8);
  testing_case(++count, gcd_iterative(30, 165), 15);
  testing_case(++count, gcd_iterative(2, 3), 1);
  return 0;
}

void testing_case(int index, int testing, int expected){
  std::cout << "Test " << index << ": ";
  if(testing == expected) std::cout << "passed" << std::endl;
  else{
    std::cout << "not passed" << std::endl;
    std::cout << "It was expected " << expected << ", but it was received " << testing << std::endl;
  }
  std::cout << std::endl;
}