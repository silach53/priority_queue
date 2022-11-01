add_library(QueueR QueueR.hpp ClikeQueueR.h QueueR.cpp ClikeQueueR.cpp)

add_executable(QueueR_test QueueR_test.cpp)

target_link_libraries(QueueR_test QueueR)

add_test(QueueR_unit_test QueueR_test )