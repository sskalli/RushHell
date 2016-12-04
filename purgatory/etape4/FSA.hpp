#ifndef FSA_HPP_
#define FSA_HPP_

# include <vector>
# include <iostream>

# include "State.hpp"

class	FSA {
public:
  std::vector<State>	_states;
  std::string		_initial;

  FSA() {}
  ~FSA() {}

  void		addState(State s) {
	  _states.push_back(s);
  }

  std::vector<State>	closure(State s) {
	  std::vector<State> states;
	  std::vector<Edge> edges = s.getEdge();
	  int i = 0;

	  states.push_back(s);
	  for (std::vector<Edge>::iterator it = edges.begin(); it != edges.end(); ++it) {
		  if ((*it)(0)) {
			  states.push_back((*this)[s.getLinkedStateName(i)]);
		  }
		  i++;
	  }
	  /* debug */
	  for (std::vector<State>::iterator re = states.begin(); re != states.end(); ++re) {
		  std::cout << (*re).getName() << std::endl;
	  }
	  return states;
  }

  std::vector<State>	move(char c) {
	  std::vector<State> states;

	  for (std::vector<State>::iterator it = _states.begin(); it != _states.end(); ++it) {

		  std::vector<Edge> edges = (*it).getEdge();

		  for (std::vector<Edge>::iterator re = edges.begin(); re != edges.end(); ++re) {
			  if ((*re)(c)) {
				  states.push_back((*it));
			  }
		  }
	  }
	  /* debug */
	  for (std::vector<State>::iterator de = states.begin(); de != states.end(); ++de) {
		  std::cout << (*de).getName() << std::endl;
	  }
	  return states;
  }

  State		&operator[](std::string const &name) {
    for (std::vector<State>::iterator it = _states.begin(); it != _states.end(); ++it) {
      if ((*it).getName().compare(name) == 0)
	return *it;
    }
  }
};

#endif /* !FSA_HPP_ */
