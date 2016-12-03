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

		std::vector<Edge>	_edges = (*it).getEdge();

		for (std::vector<Edge>::iterator re = _edges.begin(); re != _edges.end(); ++re) {

			if ((*re)(alphabet[i])) {
				*it = _fsa[(*it).getLinkedStateName(alphabet[i])];
				if ((*it).getFinal()) {
					return true;
				}
			}
		}
    }
    return false;
  }
};

#endif /* !MATCHER_HPP_ */
