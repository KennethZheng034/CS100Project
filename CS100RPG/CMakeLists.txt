CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
SET(CMAKE_CXX_STANDARD 17)
project(cs100_finalProject)
ADD_SUBDIRECTORY(googletest)
ADD_EXECUTABLE(runGame
     src/main.cpp
    src/display/Display.cpp
     src/core/Student.cpp
     src/events/Orientation.cpp
)
ADD_EXECUTABLE(tests
    unit_tests/unit_tests.cpp   
    src/core/Student.cpp
    src/events/Orientation.cpp
)
TARGET_LINK_LIBRARIES(tests gtest)
TARGET_COMPILE_DEFINITIONS(tests PRIVATE gtest_disable_pthreads=ON)