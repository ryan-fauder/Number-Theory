
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