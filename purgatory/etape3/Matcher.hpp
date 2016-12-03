#ifndef MATCHER_HPP_
# define MATCHER_HPP_

# include "FSA.hpp"

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
    return true;
  }
};

#endif /* !MATCHER_HPP_ */
