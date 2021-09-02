#ifndef __MODULAR_ARITHMETIC_HPP__
#define __MODULAR_ARITHMETIC_HPP__

namespace modularClass{
  extern int number;
  extern void setNumber(int);
};
// Sum
int sumModular(int, int);

// Mulitplication
int multiplyModular(int, int);

// subtraction
int subModular(int, int);

int divModular(int, int);

int inverseModular(int);

int absModular(int a);

#endif // __MODULAR_ARITHMETIC_HPP__