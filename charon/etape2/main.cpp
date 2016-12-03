#include "Function.hpp"
#include <iostream>
#include <boost/bind.hpp>

int	test(char c)
{
  std::cout << c << std::endl;
}

int	main(int, char **)
{
  Function<int (char)>	f = boost::bind(&test, _1);

  f('d');
}
