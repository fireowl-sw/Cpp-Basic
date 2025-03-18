cmake_minimum_required(VERSION 3.10)  # 必须放在第一行
project(Cpp-Basic VERSION 1.0)        # 项目名称和版本

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加头文件搜索路径（如果 include 目录下有头文件）
include_directories(${PROJECT_SOURCE_DIR}/include)

# 自动收集 src 目录下的所有源文件
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_FILES)

# 设置可执行文件输出到 build 目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# 生成可执行文件（最终生成的可执行文件名为 CppBasicExecutable）
add_executable(CppBasicExecutable ${SRC_FILES})