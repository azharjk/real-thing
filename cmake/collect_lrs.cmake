# lrs cmake option

set(LRS_BASE_DIR ${CMAKE_SOURCE_DIR}/login-registration-system)

add_executable(login-regis-system)

target_sources(login-regis-system PRIVATE
               ${LRS_BASE_DIR}/lrs.cpp
               ${LRS_BASE_DIR}/lrs-cli.cpp
               ${LRS_BASE_DIR}/lrs-main.cpp)

target_include_directories(login-regis-system PRIVATE
                           ${LRS_BASE_DIR})

target_compile_options(login-regis-system PRIVATE
                       -Wall -Wextra -Wpedantic)
