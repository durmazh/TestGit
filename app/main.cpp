#include <iostream>
#include "MyMath.hpp"

int main() 
{
  int a = 5, b = 3;
  MyMath m;
  std::cout << m.Mult(a,b) << std::endl;
  std::cout << m.Add(a,b) << std::endl;
  std::cout << m.Div(a,b) << std::endl;
  return 0;
}
