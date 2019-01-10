# Clone Google Test
include(../cmake/googletest.cmake)
fetch_googletest(
        ${PROJECT_SOURCE_DIR}/cmake
        ${PROJECT_BINARY_DIR}/googletest
)

#add_subdirectory(lib/googletest)
enable_testing()

add_executable(tests Test.cpp ../src/Printer.h)
target_link_libraries(tests gtest gtest_main)