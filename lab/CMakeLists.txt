find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries(your_project PRIVATE GTest::GTest GTest::Main)


add_executable(lab Source.cpp)