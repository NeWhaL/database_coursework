cmake_minimum_required(VERSION 3.16)

project(crud_coursework VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools Sql)


find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBPQXX REQUIRED libpqxx)


set(TS_FILES crud_coursework_ru_RU.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(crud_coursework
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET crud_coursework APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(crud_coursework SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(crud_coursework
            ${PROJECT_SOURCES}

            atablemodel.h
            test_form.h test_form.cpp test_form.ui
            icrud.h
            model_table_discipline.h model_table_discipline.cpp
            database_manager.h database_manager.cpp
            dialog_discipline.h dialog_discipline.cpp dialog_discipline.ui
            atablemodel.h
            atablemodel.cpp
            model_table_teacher.h model_table_teacher.cpp
            dialog_teacher.h dialog_teacher.cpp dialog_teacher.ui
            adialog.h adialog.cpp
            dialog_student.h dialog_student.cpp dialog_student.ui
            model_table_student.h
            model_table_student.cpp
            dialog_group.h dialog_group.cpp dialog_group.ui
            model_table_group.h model_table_group.cpp
            dialog_stream.h dialog_stream.cpp dialog_stream.ui
            model_table_stream.h model_table_stream.cpp
            dialog_auditorium.h dialog_auditorium.cpp dialog_auditorium.ui
            model_table_auditorium.h model_table_auditorium.cpp
            dialog_relationship_stream_group.h dialog_relationship_stream_group.cpp dialog_relationship_stream_group.ui
            model_table_relationship_stream_group.h model_table_relationship_stream_group.cpp
            dialog_relationship_teacher_discipline.h dialog_relationship_teacher_discipline.cpp dialog_relationship_teacher_discipline.ui
            model_table_relationship_teacher_discipline.h model_table_relationship_teacher_discipline.cpp
            dialog_lecture.h dialog_lecture.cpp dialog_lecture.ui
            model_table_lecture.h model_table_lecture.cpp
            sort_filter.h sort_filter.cpp
            form_menu.h form_menu.cpp form_menu.ui
            user.h
            form_connection_string.h form_connection_string.cpp form_connection_string.ui
            dialog_change_user.h dialog_change_user.cpp dialog_change_user.ui






        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

# target_link_libraries(crud_coursework PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(crud_coursework PRIVATE
  Qt${QT_VERSION_MAJOR}::Widgets
  Qt${QT_VERSION_MAJOR}::Sql
  ${LIBPQXX_LIBRARIES}
)

# Указать include директории для libpqxx
target_include_directories(crud_coursework PRIVATE ${LIBPQXX_INCLUDE_DIRS})

# Указать пути для компиляции
target_compile_options(crud_coursework PRIVATE ${LIBPQXX_CFLAGS_OTHER})

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.crud_coursework)
endif()
set_target_properties(crud_coursework PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS crud_coursework
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(crud_coursework)
endif()
