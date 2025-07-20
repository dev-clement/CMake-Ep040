set(SOURCES
    ./src/main.cpp
)

add_executable(${EXECUTABLE_NAME} ${SOURCES})
target_link_libraries(
    ${EXECUTABLE_NAME}
    PUBLIC
    ${LIBRARY_NAME}
    nlohmann_json::nlohmann_json
)
target_include_directories(${EXECUTABLE_NAME} PUBLIC ./include/)
