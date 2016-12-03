#ifndef MATCHER_HPP_
# define MATCHER_HPP_

# include "FSA.hpp"
# include <iostream>

class	Matcher {
private:
  FSA		_fsa;
public:
  Matcher(FSA const &f) {_fsa = f;}
  ~Matcher() {}

  bool		find(std::string const &alphabet, int &i) {
    return true;
  }

  bool		find(std::string const &alphabet) {
    std::vector<State>::iterator	it = _fsa._states.begin();
    
    for (int i = 0; alphabet[i]; i++) {
      if ((*it).getEdge("fdp")(alphabet[i]))
	std::cout << "c le meme frr" << std::endl;
    }
    return true;
  }
};

#endif /* !MATCHER_HPP_ */
