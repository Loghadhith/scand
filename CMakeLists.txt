cmake_minimum_required(VERSION 3.12)
project(nand_flash_model)

set(CMAKE_CXX_STANDARD 17)

# Optional but recommended: enable compile_commands.json for LSP
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# SystemC install location
set(SYSTEMC_INSTALL ${CMAKE_SOURCE_DIR}/external/systemc/build/install)

# Define executable
add_executable(nand_flash_model
    src/nand_flash.cpp
    test/nand_flash_tb.cpp
)

# Add include directories so clangd picks them up
target_include_directories(nand_flash_model PRIVATE
    ${SYSTEMC_INSTALL}/include
    ${CMAKE_SOURCE_DIR}/src
)

# Link SystemC (just for build, LSP only cares about includes)
target_link_directories(nand_flash_model PRIVATE ${SYSTEMC_INSTALL}/lib)
target_link_libraries(nand_flash_model PRIVATE systemc)
