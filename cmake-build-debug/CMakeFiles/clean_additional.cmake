# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/apppasoor_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/apppasoor_autogen.dir/ParseCache.txt"
  "apppasoor_autogen"
  )
endif()
