#include "../Greatest Common Divisor/gcd-euclidian.hpp"
#include "lcm.hpp"
int lcm(int a, int b){
  // Let a * b = lcm(a, b) * gcd(a, b)
  // so lcm(a, b) = a * b / gcd(a, b)
  return (a * b) / gcd_recursive(a, b);
}

