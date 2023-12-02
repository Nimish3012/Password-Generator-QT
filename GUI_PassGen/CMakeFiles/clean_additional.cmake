# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Password_Generator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Password_Generator_autogen.dir\\ParseCache.txt"
  "Password_Generator_autogen"
  )
endif()
