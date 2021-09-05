#include "modular-arithmetic.hpp"
#include "gcd-euclidian.hpp"
#include <iostream>
#include <vector>
namespace modularClass{
  int number = 1;
  void setNumber(int n){
    number = n;
  }
  int getNumber(){
    return number;
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
  // it uses the concept of:
  // a modular division between "a" and "b" = multiplication between "inversed a" and "b"
  int inversed = inverseModular(a);
  if(inversed == -1) return -1;
  return multiplyModular(b, inversed);
}

int firstDivModular(int a, int b){
 int s, t, gcd;
  gcd = gcd_extended(a, modularClass::number, s, t);
  if(b % gcd != 0) return 0;
  return absModular(multiplyModular(s, b/gcd));
}

int allDivModular(int a, int b, std::vector<int> & solutions){
  int s, t, gcd;
  gcd = gcd_extended(a, modularClass::number, s, t);
  if(b % gcd != 0) return 0;
  int first_solution, n0;

  first_solution = absModular(multiplyModular(s, b/gcd));
  n0 = modularClass::number / gcd;
  solutions.reserve(gcd);

  for (int i = 0; i < gcd; i++)
  {
    solutions.push_back(absModular(first_solution + i * n0));
  }
  return gcd;
}

int inverseModular(int a){
  int s, t, gcd;
  gcd = gcd_extended(a, modularClass::number, s, t);
  if(gcd != 1) return -1;
  return absModular(s % modularClass::number);
}

int absModular(int a){
  a %= modularClass::number;
  if(a < 0) return a + modularClass::number;
  return a;
}