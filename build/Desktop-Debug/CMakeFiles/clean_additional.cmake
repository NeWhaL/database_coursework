# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/crud_coursework_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/crud_coursework_autogen.dir/ParseCache.txt"
  "crud_coursework_autogen"
  )
endif()
