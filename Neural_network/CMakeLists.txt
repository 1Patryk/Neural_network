# CMakeList.txt : CMake project for Neural_network, include source and define
# project specific logic here.
#

# Add source to this project's executable.
include_directories(Include)				
file(GLOB SOURCES "Source/*.cpp")
add_executable (Neural_network ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Neural_network PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
