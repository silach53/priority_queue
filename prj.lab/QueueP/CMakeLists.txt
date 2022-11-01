add_library(QueueP QueueP.hpp ClikeQueueP.h QueueP.cpp ClikeQueueP.cpp)

add_executable(QueueP_test QueueP_test.cpp)

target_link_libraries(QueueP_test QueueP)

add_test(QueueP_unit_test QueueP_test )