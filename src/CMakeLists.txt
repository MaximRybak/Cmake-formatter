cmake_minimum_required(VERSION 2.8)

#target_sources(${PROJECT_NAME} INTERFACE ${SOURCE_DIR}/MainProgram/hmi_message_handler_settings.cpp)

# --- Protocol Handler
#add_subdirectory(./resumption)

file(GLOB ALL_FILES_IN_DIRECTORIES
    "${SOURCE_DIR}/Component/Parser/*.h"
    "${SOURCE_DIR}/Component/Parser/*.cpp"
    "${SOURCE_DIR}/Component/DocumentFinder/*.h"
    "${SOURCE_DIR}/Component/DocumentFinder/*.cpp"
)

include_directories(${SOURCE_DIR}/Component/Parser)
include_directories(${SOURCE_DIR}/Component/DocumentFinder)

target_sources(${PROJECT_NAME}
    PUBLIC
    ${ALL_FILES_IN_DIRECTORIES}
)
