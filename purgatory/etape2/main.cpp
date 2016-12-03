#include "Machine.hpp"
#include <iostream>
#include <string>

eState		moveAppend(eState s, std::string &str, char c, int const j)
{
  s = gStateTable[s][j];
  str += c;
  return s;
}

eState		haltReset(eState s, std::string &str)
{
  std::cout << str << std::endl;
  str.clear();
  s = S0;
  return s;
}

void		machine(char *s)
{
  std::string	alph = "mechant";
  std::string	token;

  eState	status = S0;

  for (int i = 0; s[i]; i++)
    {
      bool	found = false;
      
      for (int j = 0; j < 7; j++)
	{
	  if (status == S7)
	    {
	      status = haltReset(status, token);
	      found = true;
	    }
	  if (s[i] == alph[j])
	    {
	      if (gActionTable[status][j] == MA)
		status = moveAppend(status, token, alph[j], j);
	      found = true;
	    }
	}
      if (!found)
	status = haltReset(status, token);
    }
  if (!token.empty())
    status = haltReset(status, token);
}

int	main(int, char **av)
{
  machine(av[1]);
  return 1;
} 
