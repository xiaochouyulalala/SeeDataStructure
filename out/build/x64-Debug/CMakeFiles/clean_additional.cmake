# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\SeeDataStructure_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SeeDataStructure_autogen.dir\\ParseCache.txt"
  "SeeDataStructure_autogen"
  )
endif()
