﻿cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-ds)

  file(GLOB AWS_DS_HEADERS
    "include/aws/ds/*.h"
  )

  file(GLOB AWS_DS_MODEL_HEADERS
    "include/aws/ds/model/*.h"
  )

  file(GLOB AWS_DS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_DS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB DS_UNIFIED_HEADERS
    ${AWS_DS_HEADERS}
    ${AWS_DS_MODEL_HEADERS}
  )

  file(GLOB DS_UNITY_SRC
    ${AWS_DS_SOURCE}
    ${AWS_DS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("DS" DS_UNITY_SRC)
  endif()

  file(GLOB DS_SRC
    ${DS_UNIFIED_HEADERS}
    ${DS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\ds" FILES ${AWS_DS_HEADERS})
      source_group("Header Files\\aws\\ds\\model" FILES ${AWS_DS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_DS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_DS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(DS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${DS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_DIRECTORYSERVICE_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-ds ${LIBTYPE} ${DS_SRC})

  target_include_directories(aws-cpp-sdk-ds PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-ds aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-ds
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-ds)
    else()
      install (TARGETS aws-cpp-sdk-ds
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_DS_HEADERS} DESTINATION include/aws/ds)
  install (FILES ${AWS_DS_MODEL_HEADERS} DESTINATION include/aws/ds/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-ds.autopkg DESTINATION nuget)
  endif()



