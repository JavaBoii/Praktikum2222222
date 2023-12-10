# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ShoppingCartProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ShoppingCartProject_autogen.dir\\ParseCache.txt"
  "ShoppingCartProject_autogen"
  )
endif()
