project(class)

include_directories(${PROJECT_SOURCE_DIR}/../../include)

set(SRC_LIST empty_class.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})