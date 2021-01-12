# Find unit test files recursively which matches the naming 'UTest_*.cpp'
file(GLOB_RECURSE UNIT_TEST_FILES src/ FALSE "**/UTest_**.cpp")

foreach(UNIT_TEST_FILE ${UNIT_TEST_FILES})
    get_filename_component(UNIT_TEST_NAME ${UNIT_TEST_FILE} NAME_WE)
    
    add_executable(${UNIT_TEST_NAME} ${UNIT_TEST_FILE})
    target_link_libraries(${UNIT_TEST_NAME} ${LIBRARY_NAME} gtest_main)
    add_test(NAME ${UNIT_TEST_NAME} COMMAND ${UNIT_TEST_NAME})
endforeach()
