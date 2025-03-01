cmake_minimum_required(VERSION 3.16)

project(pasoor VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)


qt_add_executable(apppasoor
    main.cpp
        models/UiBridge.cpp
        models/UiBridge.h
        models/game.cpp
        models/game.h

)

qt_add_qml_module(apppasoor
    URI pasoor
    VERSION 1.0
    QML_FILES qml.qrc
    SOURCES models/player.h models/player.cpp
    SOURCES
    SOURCES models/scoregridclass.h models/scoregridclass.cpp

)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(apppasoor PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.apppasoor
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(apppasoor
    PRIVATE Qt6::Quick)

include(GNUInstallDirs)
install(TARGETS apppasoor
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
