#include <iostream>
#include "chinese-theorem.hpp"

using namespace std;
int main()
{
  modularSystem system1(4);
  system1.addEquation(13, 25);
  system1.addEquation(11, 27);
  system1.addEquation(23, 29);
  system1.addEquation(3, 32);

  system1.printEquations();

  system1.getSolutionEquations();
  return 0;
}
