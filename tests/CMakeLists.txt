# Clone Google Test
set(GOOGLETEST_DIR ${CMAKE_SOURCE_DIR}/tests/lib/googletest)
if(NOT EXISTS ${GOOGLETEST_DIR})
    find_package(Git REQUIRED)
    execute_process(
            COMMAND ${GIT_EXECUTABLE} clone https://github.com/google/googletest ${GOOGLETEST_DIR}
    )
endif()

add_subdirectory(lib/googletest)
enable_testing()

add_executable(tests Test.cpp ../src/Printer.h)
target_link_libraries(tests gtest gtest_main)