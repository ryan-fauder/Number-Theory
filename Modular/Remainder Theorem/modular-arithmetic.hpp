#ifndef __MODULAR_ARITHMETIC_HPP__
#define __MODULAR_ARITHMETIC_HPP__

#include <vector>
namespace modularClass{
  extern int number;
  extern void setNumber(int);
  extern int getNumber();
};

/**
 * @brief Calculate the modular sum between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @return (int) return modular sum between a and b
 */
int sumModular(int, int);

/**
 * @brief Calculate the modular multiplication between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @return (int) return modular multiplication between a and b
 */
int multiplyModular(int, int);

/**
 * @brief Calculate the modular subtraction between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @return (int) return modular subtraction between a and b
 */
int subModular(int, int);

/**
 * @brief Get the modular multiplicative inverse of a number in Z(modularClass::number)
 * 
 * @param (int) a: number to be inversed
 * @return (int) return modular multiplicative inverse of "a" 
 * if gcd(modularClass::number, a) == 1. 
 * Otherwise, there's not inverse multiplicative, so it returns -1;
 */
int inverseModular(int);

/**
 * @brief Get the number modulo in Z(modularClass::number)
 * 
 * @param (int) a: number to be apply modulo
 * @return (int) return a (mod modularClass::number)
 * if a < 0, it'll get the positive remainder;
 */
int absModular(int);

/**
 * @brief Calculate the modular division between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @return (int) if "a" is inversible in Z(modularClass::number)
 * returns modular division between a and b 
 * Otherwise, it returns -1. It means that is no solution division, or a more than one solution. 
 * 
 */
int divModular(int, int);


/**
 * @brief Calculate the modular division between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @return (int) if it's a solvable modular division, it returns the first solution
 * Otherwise, it returns -1;
 */
int firstDivModular(int, int);

/*
 * @brief Calculate the modular division between two numbers in Z(modularClass::number)
 * 
 * @param (int) a: first number
 * @param (int) b: second number
 * @param (std::vector<int> &) solutions: all solutions will be pushed back into vector.
 * @return (int) size of the vector passed by paramaters. It means the quantity of solutions.
 * If there's no solution, itll return -1;
 */
int allDivModular(int, int, std::vector<int> &);

#endif // __MODULAR_ARITHMETIC_HPP__