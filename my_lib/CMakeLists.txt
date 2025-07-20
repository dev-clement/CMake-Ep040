set(SOURCES
    ./src/my_lib.cpp
)

set(HEADERS
    ./include/my_lib.hpp
)

set(LIBRARY_INCLUDES
    ./include/
    ${CMAKE_BINARY_DIR}/configured_files/include
)

set(LIBRARY_LINKED
    cxxopts::cxxopts
    Catch2::Catch2WithMain
    fmt::fmt
    nlohmann_json::nlohmann_json
    spdlog::spdlog
)

add_library(${LIBRARY_NAME} STATIC ${SOURCES} ${HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})
target_link_libraries(${LIBRARY_NAME} PUBLIC ${LIBRARY_LINKED})
