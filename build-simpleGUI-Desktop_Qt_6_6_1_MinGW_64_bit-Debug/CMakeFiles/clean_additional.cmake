# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simpleGUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simpleGUI_autogen.dir\\ParseCache.txt"
  "simpleGUI_autogen"
  )
endif()
