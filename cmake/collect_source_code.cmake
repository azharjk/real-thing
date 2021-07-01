# lrs project source code
add_executable(login-registration-system)
target_sources(
  login-registration-system
  PRIVATE ${CMAKE_SOURCE_DIR}/login-registration-system/lrs-cli.cpp
)
target_compile_options(
  login-registration-system
  PRIVATE
  -Wall -Wextra -Wpedantic
)
target_include_directories(
  login-registration-system
  PRIVATE
  ${CMAKE_SOURCE_DIR}/login-registration-system
)
