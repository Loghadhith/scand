cmake_minimum_required(VERSION 3.12)
project(nand_flash_model)

set(CMAKE_CXX_STANDARD 17)

# SystemC include/link setup
set(SYSTEMC_INSTALL ${CMAKE_SOURCE_DIR}/external/systemc/build/install)
include_directories(${SYSTEMC_INSTALL}/include)
link_directories(${SYSTEMC_INSTALL}/lib)

# Add your own src folder
include_directories(${CMAKE_SOURCE_DIR}/src)

# Source files
add_executable(nand_flash_model
    src/nand_flash.cpp
    test/nand_flash_tb.cpp
)

target_link_libraries(nand_flash_model systemc)


# cmake_minimum_required(VERSION 3.12)
# project(nand_flash_model)
#
# set(CMAKE_CXX_STANDARD 17)
#
# # Set SystemC paths
# # SystemC install path
# set(SYSTEMC_INSTALL ${CMAKE_SOURCE_DIR}/external/systemc/build/install)
#
# include_directories(${SYSTEMC_INSTALL}/include)
# link_directories(${SYSTEMC_INSTALL}/lib)
#
# add_executable(nand_flash_model
#     src/nand_flash.cpp
#     test/nand_flash_tb.cpp
# )
#
# target_link_libraries(nand_flash_model systemc)

# set(SYSTEMC_HOME ${CMAKE_SOURCE_DIR}/external/systemc)
# include_directories(${SYSTEMC_HOME})
# include_directories(${SYSTEMC_HOME}/src)
# include_directories(${SYSTEMC_HOME}/src/sysc)
#
# # Compile SystemC as part of the build (optional, see note below)
# add_subdirectory(${SYSTEMC_HOME} EXCLUDE_FROM_ALL)
#
# # Source files
# add_executable(nand_flash_model
#     src/nand_flash.cpp
#     test/nand_flash_tb.cpp
# )
#
# # Link SystemC statically
# target_link_libraries(nand_flash_model systemc)
#
