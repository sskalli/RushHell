project(test_functor_type)

set (SRCS
  main.cpp
  )

set (HEADERS
  Function.hpp
  )

add_executable(test_functor_type ${SRCS} ${HEADERS})
