cmake_minimum_required(VERSION 3.16)
project(battery-mon C)

add_executable(demo 
    src/demo_main.c
    src/battery.c  # Add the implementation file that contains battery_percent()
)