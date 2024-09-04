cmake_minimum_required(VERSION 3.16)

project(CopiedPastedIsolated LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CopiedPastedIsolated main.cpp)

include(GNUInstallDirs)
install(TARGETS CopiedPastedIsolated
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
