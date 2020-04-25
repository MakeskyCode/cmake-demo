## CMake简介
### CMake 是什么？
CMake是一个开源的跨平台工具系列，旨在构建，测试和打包软件。CMake用于使用简单的平台和独立于编译器的配置文件来控制软件编译过程，并生成可在您选择的编译器环境中使用的本机makefile和工作空间。CMake工具套件由Kitware创建，以满足对ITK和VTK等开源项目的强大跨平台构建环境的需求。
CMake类似于automake的跨平台辅助项目编译的工具,但语法更加简单易用,你也可以认为cmake是一套编程语言或者说脚本，称为CMake语言，支持变量定义、流程控制、函数、预制函数等。

### CMake的工作流程
CMake处理顶级目录的CMakeLists.txt（CMake的配置文件，配置了子目录，编译目标，编译依赖等等），最后根据配置生成相应的MakeFile。
使用make命令就可以进行编译。
![cmake流程图.png][1]


## 环境要求
默认已配置好以下环境： 
CMake 
gcc 
Linxu环境（ubuntu）



[1]:./doc/cmake流程图.png