#include <iostream>
#include "FunctionSignature.hpp"
#include <string>

int     testSizeFour(int a, int b, int c, int d)
{
    std::cout
    << "1° int du test a 4 argu : "
    << a
    << " , 2° : "
    << b
    << " , 3° : "
    << c
    << " , 4° : "
    << d << std::endl;
    return (1);
}

std::string testSizeFive(int a, int b, int c, int d, int e)
{
    std::cout
    << "1° int du test a 4 argu : "
    << a
    << " , 2° : "
    << b
    << " , 3° : "
    << c
    << " , 4° : "
    << d
    << " , 5° : "
    << e << std::endl;
    return ("Bonjour toi");
}

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
    int ret;
    std::string str;

  FunctionSignature<void (int)>::type f = &test;
  FunctionSignature<int (int, int)>::type g = &test1;
    FunctionSignature<void (std::string const &)>::type h = &test15892354896546548;
    FunctionSignature<int (int, int, int, int)>::type t4 = &testSizeFour;
    FunctionSignature<std::string (int, int, int)>::type t5 = &testSizeFive;

  f(5);
  g(12, 15);
  h("fdp");
    ret = t4(1,2,3,4);
    str = t5(1,2,3,4,5);

    std::cout
    << "retour des fonctions 4 et 5 : "
    << ret
    << " "
    << str << std::endl;
  return 0;
}
