cmake_minimum_required(VERSION 3.10)
project(src)

set(SUBDIRS
    02_builder
)

foreach(subdir ${SUBDIRS})
    add_subdirectory(${subdir})
endforeach(subdir ${SUBDIRS})
