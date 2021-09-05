#ifndef __CHINESE_THEOREM__
#define __CHINESE_THEOREM__

#include <vector>

typedef std::pair<int, int> Equation; // pair of (a, m) from x === a (mod m)
class modularSystem
{
public:
  modularSystem(int size);
  void addEquation(int a, int m);
  void setSize(int size);
  int getSize();
  void setTotalM(int value);
  long long int getTotalM();
  static Equation createEquation(int a, int m){
    return std::make_pair(a, m);
  }
  void printEquations();
  int solveEquations();
  void getSolutionEquations();
private:
  int size;
  std::vector<Equation> equations;
  long long int total_m = 1;
};

#endif // __CHINESE_THEOREM__
