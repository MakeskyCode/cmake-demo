# 声明编译要求cmake最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_DEFINITIONS(-std=c++11)

# 添加库源文件
SET(LIB_SOURCE utilsbox.cpp)

# 添加静态库，关键词为static
ADD_LIBRARY(utilsbox STATIC ${LIB_SOURCE})

# 添加动态库，关键词为shared
ADD_LIBRARY(utilsbox_shared SHARED ${LIB_SOURCE})

# 指定动态库的输出名称
SET_TARGET_PROPERTIES(utilsbox_shared PROPERTIES OUTPUT_NAME "utilsbox")

# 指定动态库版本, 视需求而定，可不加
# VERSION:动态库版本，SOVERSION:API版本
SET_TARGET_PROPERTIES(utilsbox_shared PROPERTIES VERSION 0.1.1 SOVERSION 0)

# 指定库编译输出目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# 指定库安装位置
# SET(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/lib_utilsbox)

INSTALL(FILES utilsbox.h DESTINATION include)
INSTALL(TARGETS utilsbox utilsbox_shared
    # 动态库安装位置
    LIBRARY DESTINATION lib
    # 静态库安装位置
    ARCHIVE DESTINATION lib
    )