#include "modular-arithmetic.hpp"
#include "gcd-euclidian.hpp"
#include <iostream>
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
  return absModular((a * b) % modularClass::number);
}

int subModular(int a, int b){
  int subtraction = sumModular(a, -b);

  // For instance, if a = 2, b = 4 and number = 10
  // sumModular(2, -4) = -2; It's a negative rest, but we should get a positive rest. 
  //In this way, we've to sum rest and number;
  return absModular(subtraction);
}

int divModular(int a, int b){
  int s, t, gcd;
  gcd = gcd_extended(a, modularClass::number, s, t);
  if(b % gcd != 0) return -1;
  int x0, n0;

  x0 = absModular(multiplyModular(s, b/gcd));
  n0 = modularClass::number / gcd;
  for (int i = 0; i < gcd; i++)
  {
    std::cout << "- " << absModular(x0 + i * n0) << std::endl;
  }
  
  return x0;
}

int inverseModular(int a){
  int s, t, gcd;
  gcd = gcd_extended(a, modularClass::number, s, t);
  if(gcd != 1) return -1;
  return absModular(s % modularClass::number);
}

int absModular(int a){
  if(a < 0) return a + modularClass::number;
  return a % modularClass::number;
}