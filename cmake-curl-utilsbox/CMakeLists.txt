# 声明编译要求cmake最低版本
cmake_minimum_required(VERSION 3.0)

# 声明一个cmake工程
project(CURLTEST)

# 添加子目录, 并指定指定中间二进制和目标二进制存放的位置
ADD_SUBDIRECTORY(src bin)
