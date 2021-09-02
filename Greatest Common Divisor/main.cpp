#include <bits/stdc++.h>
#include "gcd-euclidian.hpp"
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

  gcd_visualization(1731, 421);

  int s, t, gcd;
  gcd = gcd_extended(1731, 421, s, t);
  
  // It means that s * a + t * b = d;
  testing_case(++count, (s*1731 + t*421) - gcd, 0);
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