project(test_fsa)

set (SRCS
  main.cpp
  )

set (HEADERS
  Edge.hpp
  State.hpp
  FSA.hpp
  Matcher.hpp
  )

add_executable(test_dynamic_fsa ${SRCS} ${HEADERS})
