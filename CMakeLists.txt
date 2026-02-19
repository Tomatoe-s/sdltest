cmake_minimum_required(VERSION 3.20)
project(graphics)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# --------------------------------
# Fetch SDL3 from GitHub (latest)
# --------------------------------
FetchContent_Declare(
    SDL3
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG main            # always stays up-to-date with latest SDL3
    GIT_SHALLOW TRUE        # faster clone
)

FetchContent_MakeAvailable(SDL3)

# --------------------------------
# Your source files
# --------------------------------
file(GLOB_RECURSE SRC src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC})

# --------------------------------
# Link SDL3
# --------------------------------
target_link_libraries(${PROJECT_NAME} PRIVATE SDL3::SDL3)
