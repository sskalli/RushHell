project(test_functor_type)

set (SRCS
  main.cpp
  )

set (HEADERS
  FunctionSignature.hpp
  )

add_executable(test_functor_type ${SRCS} ${HEADERS})
