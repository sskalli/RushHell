#ifndef STATE_HPP_
# define STATE_HPP_

# include <string>
# include <sstream>
# include <vector>
# include <map>

# include "Edge.hpp"

class	State {

private:
  std::string				_name;
  bool					_final;

  std::map<std::string, Edge>		_link;

public:
  State(std::string const &s, bool b = false) {
    _name = s;
    _final = b;
  }
  
  ~State() {}

  std::string		getName() const {
    return _name;
  }

  static State		*createState() {
    static int		i = 0;
    std::stringstream	ss;

    ss << "S";
    ss << i;

    State		*state = new State(ss.str(), false);

    i++;
    return state;
  }
  
  bool			getFinal() const {
	  return _final;
  }

  void			setFinal(bool b) {
	  _final = b;
  }

  void			setLink(std::string const &s, Edge &e) {
    _link.insert(std::pair<std::string, Edge>(s, e));
  }

  std::vector<Edge>			getEdge()
  {
	std::vector<Edge>		edges;

	for (std::map<std::string, Edge>::iterator it = _link.begin(); it != _link.end(); ++it) {
		edges.push_back(it->second);
	}
	return edges;
  }

  std::string				getLinkedStateName(char c) {
	  for (std::map<std::string, Edge>::iterator it = _link.begin(); it != _link.end(); ++it) {
		  if (it->second(c)) {
			  return it->first;
		  }
	  }
	  return "";
  }

  std::string				getLinkedStateName(int i) {
	  int	c = 0;
	  
	  for (std::map<std::string, Edge>::iterator it = _link.begin(); it != _link.end(); ++it) {
		  if (c == i) {
			  return it->first;
		  }
		  c++;
	  }
	  return "";
  }
};

bool			operator==(State const &s, std::string const &n) {
  if (s.getName() == n)
    return true;
  return false;
}

#endif /* !STATE_HPP */
