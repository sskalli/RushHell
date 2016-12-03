#include <iostream>
#include "FunctionSignature.hpp"
#include <string>

void	test15892354896546548(std::string const &s)
{
  std::cout << s << std::endl;
}

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
  FunctionSignature<void (std::string const &)>::type h = &test15892354896546548;

  f(5);
  g(12, 15);
  h("fdp");
  return 0;
}
