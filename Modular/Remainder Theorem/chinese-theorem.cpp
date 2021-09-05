#include "chinese-theorem.hpp"
#include "modular-arithmetic.hpp"
#include <vector>
#include <iostream>

modularSystem::modularSystem(int size = 0)
{
  modularSystem::setSize(size);
}

void modularSystem::setSize(int size){
  modularSystem::size = size;
  modularSystem::equations.reserve(size);
}

int modularSystem::getSize(){
  return modularSystem::size;
}

void modularSystem::setTotalM(int value){
  if(value != 0) modularSystem::total_m *= value;
}

long long int modularSystem::getTotalM(){
  return modularSystem::total_m;
}

void modularSystem::addEquation(int a, int m){
  modularSystem::equations.push_back(modularSystem::createEquation(a, m));
  modularSystem::setTotalM(m);
}

void modularSystem::printEquations(){
  int size = modularSystem::getSize();
  for (int i = 0; i < size; i++)
  {
    std::cout << "x === " << modularSystem::equations[i].first; 
    std::cout << " (mod " << modularSystem::equations[i].second << ")"; 
    std::cout << std::endl;
  }
  
}

int modularSystem::solveEquations(){
  int x; // solution
  int total_m = modularSystem::getTotalM();
  int size = modularSystem::getSize();
  
  int value, modulo, xi, inversed_xi, except_modulo; 
  for (int i = 0; i < size; i++)
  {
    value = modularSystem::equations[i].first;
    modulo = modularSystem::equations[i].second;
    modularClass::setNumber(modulo);

    except_modulo = total_m / modulo;
    xi = absModular(except_modulo);
    inversed_xi = inverseModular(xi);
    if(inversed_xi == -1) return -1;

    modularClass::setNumber(total_m);
    x += multiplyModular(value, multiplyModular(except_modulo, inversed_xi));
  }
  return absModular(x);
}

void modularSystem::getSolutionEquations(){
  int x = 0; // solution
  int total_m = modularSystem::getTotalM();
  int size = modularSystem::getSize();
  
  std::vector<int> value, modulo, xi, inversed_xi, except_modulo;
  
  for (int i = 0; i < size; i++)
  {
    value.push_back(modularSystem::equations[i].first);
    modulo.push_back(modularSystem::equations[i].second);
    modularClass::setNumber(modulo[i]);

    except_modulo.push_back(total_m / modulo[i]);
    xi.push_back(absModular(except_modulo[i]));
    inversed_xi.push_back(inverseModular(xi[i]));

    modularClass::setNumber(total_m);
    x += multiplyModular(value[i], multiplyModular(except_modulo[i], inversed_xi[i]));
  }
  x = absModular(x);
  std::cout << "Solution" << std::endl;

  std::cout << "Indexes" << " | ";
  for (int i = 0; i < size; i++)
  {
   std::cout << i;
   if(i + 1 < size) std::cout << " | "; 
  }
  std::cout << std::endl;

  std::cout << "Mi" << " | ";
  for (int i = 0; i < size; i++)
  {
   std::cout << except_modulo[i];
   if(i + 1 < size) std::cout << " | "; 
  }
  std::cout << std::endl;

  std::cout << "xi" << " | ";
  for (int i = 0; i < size; i++)
  {
   std::cout << xi[i];
   if(i + 1 < size) std::cout << " | "; 
  }
  std::cout << std::endl;

  std::cout << "yi" << " | ";
  for (int i = 0; i < size; i++)
  {
   std::cout << inversed_xi[i];
   if(i + 1 < size) std::cout << " | "; 
  }
  std::cout << std::endl;

  std::cout << x << std::endl;
}
