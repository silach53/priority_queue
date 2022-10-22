add_executable(QueueP_main QueueP_main.cpp)

add_executable(QueueP_main_C QueueP_main.c)

target_link_libraries(QueueP_main QueueP)
target_link_libraries(QueueP_main_C QueueP)