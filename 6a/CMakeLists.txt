cmake_minimum_required(VERSION 3.16)

project(6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt6 REQUIRED COMPONENTS Core)


add_executable(6a main.cpp
    myclass.h myclass.cpp)

include(GNUInstallDirs)
install(TARGETS 6a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
target_link_libraries(h6a
    Qt6::Core
)


