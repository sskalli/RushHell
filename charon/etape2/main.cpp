#include "Function.hpp"
#include <iostream>
#include <string>

void	test1(std::string s)
{
  std::cout << s << std::endl;
}

int	test(char c)
{
  return c;
}

int	main(int, char **)
{
  Function<int (char)>	f = &test;
  Function<void (std::string)> t = &test1;

  std::cout << f('d') << std::endl;
  t("IL EST MALAAAAADE");
}
