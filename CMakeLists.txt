cmake_minimum_required(VERSION 3.10)
project(TemperatureConverter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TempConverter src/Main.CPP)

set_target_properties(TempConverter PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

if(WIN32)
    set_target_properties(TempConverter PROPERTIES OUTPUT_NAME "TemperatureConverter")
    target_link_libraries(TempConverter -static -static-libgcc -static-libstdc++)
else()
    set_target_properties(TempConverter PROPERTIES OUTPUT_NAME "temperature-converter")
endif()
