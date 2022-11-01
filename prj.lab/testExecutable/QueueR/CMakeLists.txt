add_executable(QueueR_main QueueR_main.cpp)

add_executable(QueueR_main_C QueueR_main.c)

target_link_libraries(QueueR_main QueueR)
target_link_libraries(QueueR_main_C QueueR)