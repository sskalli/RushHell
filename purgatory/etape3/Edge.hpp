#ifndef EDGE_HPP_
# define EDGE_HPP_

class	Edge
{
private:
  char		_c;
public:
  Edge(char c) {
    this->_c = c;
  }

  bool		operator()(char c) {
    if (c == this->_c)
      return true;
    return false;
  }
};

#endif /* !EDGE_HPP_ */
