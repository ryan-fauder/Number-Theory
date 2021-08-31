#include <iostream>
int euclides_gcd_extended();

int gcd_recursive(int a, int b){
  // Let a and b, s.t. a = qb + c. Then, theres a number d, such:
  // d = gcd(a, b)
  // dividend = divisor * quotient + rest;
  
  int rest = a % b;
  // Its important to notice that rest is igual to c
  
  if(rest == 0) return b;
  // if rest == 0, so b divides a.
  else return gcd_recursive(b, rest);
}

int gcd_iterative(int a, int b){
  int rest;
  while( b != 0 ){
    rest = a % b;
    a = b;
    b = rest;
  }
  return a;
}

int print_division(int dividend, int divisor, int rest, int quotient){
  std::cout << dividend << " = ";
  std::cout << divisor << " * " << quotient;
  std::cout << " + " << rest << std::endl;
}

void gcd_visualization(int dividend, int divisor){
  int rest, quotient;
  while( divisor != 0 ){
    rest = dividend % divisor;
    quotient = (dividend - rest) / divisor;

    print_division(dividend, divisor, rest, quotient);

    dividend = divisor;
    divisor = rest;
  }
  return dividend;
}
