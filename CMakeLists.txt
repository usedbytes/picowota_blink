cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(blink C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blink
	"blink.c"
)

target_link_libraries(blink
	hardware_structs
	hardware_watchdog
	pico_cyw43_arch_none
	pico_stdlib
	pico_stdlib_headers
	picowota_reboot
)

set_target_properties(blink PROPERTIES COMPILE_FLAGS "-Wall")

add_subdirectory(picowota)

picowota_build_combined(blink)
