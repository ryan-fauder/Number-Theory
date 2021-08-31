#include <bits/stdc++.h>
#include "Euclides-Algorithm.hpp"
using namespace std;
int main(){
  cout << gcd_recursive(32, 6) << endl; // it must be 2
  cout << gcd_recursive(1232, 200) << endl; // it must be 8
  cout << gcd_recursive(30, 165) << endl; // it must be 15
  cout << gcd_recursive(2, 3) << endl; // it must be 1
  return 0;
}