# 声明编译要求cmake最低版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

# 声明一个cmake工程
PROJECT(Hello)

# 添加子目录, 并指定指定中间二进制和目标二进制存放的位置
ADD_SUBDIRECTORY(src bin)

# 安装Hello脚本到bin目录下,默认755权限
INSTALL(PROGRAMS ${PROJECT_BINARY_DIR}/bin/Hello DESTINATION bin)

# 安装README文件到doc目录下
INSTALL(FILES README.md DESTINATION doc)

# 安装当前工程中doc/目录下的所有内容到doc目录下
INSTALL(DIRECTORY doc/ DESTINATION doc)
