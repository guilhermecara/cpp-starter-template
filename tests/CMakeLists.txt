add_executable(unit_tests test_main.cpp)
target_link_libraries(unit_tests PRIVATE project_lib)

add_test(NAME unit_tests COMMAND unit_tests)
