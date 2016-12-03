#ifndef STATE_HPP_
# define STATE_HPP_

# include <string>
# include <sstream>
# include <map>

class	State {

private:
  std::string				_name;
  bool					_final;

  std::map<std::string, std::string>	_link;

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

  void			setLink(std::string const &s, std::string const &e) {
    _link[s] = e;
  }
};

bool			operator==(State const &s, std::string const &n) {
  if (s.getName() == n)
    return true;
  return false;
}

#endif /* !STATE_HPP */
