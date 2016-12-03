#ifndef FUNCTION_HPP_
# define FUNCTION_HPP_

template <typename T>
class Function;

template <typename T, typename U>
class	Function <T (U)>
{
protected:
  typedef T	(*type)(U);
  type		_f;

public:
  Function(T (*f)(U)) {_f = f;}
  ~Function() {}

  Function	operator=(T (*f)(U))
  {
    if (this)
      delete _f;
    _f= f;
    return this;
  }

  T		operator()(U u)
  {
    return _f(u);
  }
};

#endif /* !FUNCTION_HPP_ */
