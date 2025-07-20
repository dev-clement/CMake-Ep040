#include <iostream>
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>

#include "my_lib.hpp"

/**
 * @brief Print out version and Hello World !
 * @return nothing
 */
void print_hello_world() {
    std::cout << "JSON Lib version: "
              << NLOHMANN_JSON_VERSION_MAJOR << "."
              << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << std::endl;

    std::cout << "FMT version: "
              << FMT_VERSION << std::endl;

    std::cout << "CXXOPTS version: "
              << CXXOPTS__VERSION_MAJOR << "."
              << CXXOPTS__VERSION_MINOR << "."
              << CXXOPTS__VERSION_PATCH << std::endl;

    std::cout << "SPDLOG version: "
              << SPDLOG_VER_MAJOR << "."
              << SPDLOG_VER_MINOR << "."
              << SPDLOG_VER_PATCH << std::endl;
}
