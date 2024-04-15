add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} object_threadsafe-lib)
target_link_libraries(${PROJECT_NAME} ByteStream)
target_link_libraries(${PROJECT_NAME} realtime-server-library)

#target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/third-party/object_threadsafe)