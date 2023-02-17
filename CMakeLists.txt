set(PROJECT_NAME dents)

cmake_minimum_required(VERSION 3.19)
project(dents VERSION 1.0.0 LANGUAGES CXX)



if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()



if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()


set(Fichiers_d27en-tte

)
source_group("Fichiers d%27en-tête" FILES ${Fichiers_d27en-tte})

set(Fichiers_sources

    "Main.cpp"


)
source_group("Fichiers sources" FILES ${Fichiers_sources})

set(ALL_FILES
    ${Fichiers_d27en-tte}
    ${Fichiers_sources}
)
set(CMAKE_CXX_STANDARD 11)
################################################################################
# Target
################################################################################
add_executable(${PROJECT_NAME} ${ALL_FILES} )
target_link_libraries(dents   )


