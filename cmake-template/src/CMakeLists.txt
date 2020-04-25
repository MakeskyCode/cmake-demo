# 声明编译要求cmake最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# 打印一些变量，没什么作用，仅为了展示MESSAGE命令如何使用，以及如何引用变量
MESSAGE(STATUS "This is BINARY dir" ${PROJECT_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir ${PROJECT_SOURCE_DIR}")
MESSAGE(STATUS "This is BINARY dir" ${Hello_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir" ${Hello_SOURCE_DIR})

# 添加源文件
SET(SOURCE 
    main.cpp
    )

# 添加一个可执行程序,名称和工程名称保持一致
ADD_EXECUTABLE(${PROJECT_NAME} ${SOURCE})

# 设置最终编译生成的可执行程序或库存放的位置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
