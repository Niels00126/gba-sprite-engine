project(bubble-shooter)

add_executable(${PROJECT_NAME}.elf
        src/main.cpp
        src/SceneLevel1.cpp src/SceneLevel1.h src/sprites_front.h src/Ball.cpp src/Ball.h src/background.h src/Level1.cpp src/Level1.h src/Level2.cpp src/Level2.h)

target_link_libraries(${PROJECT_NAME}.elf gba-sprite-engine)

add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -v -O binary ${PROJECT_NAME}.elf ${PROJECT_NAME}.gba
        )
