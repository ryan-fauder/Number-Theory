#include "modular-arithmetic.hpp"

namespace modularClass{
  int number = 1;
  void setNumber(int n){
    number = n;
  }
};

int sumModular(int a, int b){
  return (a + b) % modularClass::number;
}
int multiplyModular(int a, int b){
  return (a * b) % modularClass::number;
}

int subModular(int a, int b){
  int subtraction = sumModular(a, -b);

  // For instance, if a = 2, b = 4 and number = 10
  // sumModular(2, -4) = -2; It's a negative rest, but we should get a positive rest. 
  //In this way, we've to sum rest and number;
  if(subtraction < 0) subtraction += modularClass::number;
  return subtraction;
}