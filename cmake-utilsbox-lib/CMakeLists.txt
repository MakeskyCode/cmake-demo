# 声明编译要求cmake最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# ADD_DEFINITIONS(-std=c++11)

# 声明一个cmake工程
PROJECT(UtilsBox)

# 添加子目录, 并指定指定中间二进制和目标二进制存放的位置
ADD_SUBDIRECTORY(src bin)
ADD_SUBDIRECTORY(test)

# 这里相当于定义一个指定的测试程序，以便make test调用
ADD_TEST(utilsbox-test ${PROJECT_BINARY_DIR}/test/utilsbox-test)
ENABLE_TESTING()

# 安装当前工程中doc/目录下的所有内容到doc目录下
INSTALL(DIRECTORY doc/ DESTINATION doc)
