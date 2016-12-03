#ifndef FSA_HPP_
#define FSA_HPP_

# include <vector>

# include "State.hpp"

class	FSA {
public:
  std::vector<State>	_states;
  std::string		_initial;

  FSA() {}
  ~FSA() {}


  State		&operator[](std::string const &name) {
    for (std::vector<State>::iterator it = _states.begin(); it != _states.end(); ++it) {
      if ((*it).getName().compare(name) == 0)
	return *it;
    }
  }
};

#endif /* !FSA_HPP_ */
