#include <iostream>
#include "FunctionSignature.hpp"

void	test(int a)
{
  std::cout << a << std::endl;
}

int	test1(int a, int b)
{
  std::cout << a << " " << b << std::endl;
}

int main(int ac, char **av)
{
  FunctionSignature<void (int)>::type f = &test;
  FunctionSignature<int (int, int)>::type g = &test1;

  f(5);
  g(12, 15);
  return 0;
}
