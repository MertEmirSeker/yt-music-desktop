cmake_minimum_required(VERSION 3.16)
project(youtube_music_desktop_app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})


set(SOURCES
    src/main.cpp
)


set(HEADERS
	
)


add_executable(youtube_music_app ${SOURCES} ${HEADERS})


target_link_libraries(youtube_music_app ${wxWidgets_LIBRARIES})

