# bs cmake option

set(BS_BASE_DIR ${CMAKE_SOURCE_DIR}/bank-system)

add_executable(bank-system)

target_sources(bank-system PRIVATE
               ${BS_BASE_DIR}/bs-main.cpp
               ${BS_BASE_DIR}/bank.cpp
               ${BS_BASE_DIR}/bs-cli.cpp)

target_compile_options(bank-system PRIVATE
                       -Wall -Wextra)

target_include_directories(bank-system PRIVATE ${BS_BASE_DIR})
