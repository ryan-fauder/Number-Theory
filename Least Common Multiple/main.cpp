#include <iostream>
#include "lcm.hpp"

using namespace std;
int main()
{
  cout << lcm(2, 3) << endl; //6
  cout << lcm(4, 6) << endl; //12
  cout << lcm(15, 24) << endl; //120
  cout << lcm(30, 3) << endl; //30
  cout << lcm(10, 45) << endl; //90
  return 0;
}
