# INCLUDE_DIRECTORIES([AFTER | BEFORE] [SYSTEM] dir1 dir2 … )
# 向工程添加多个特定的头文件搜索路径,路径之间用空格分隔,如果路径包含空格,可以使用双引号将它括起来,默认的行为为追加到当前头文件搜索路径的后面。有如下两种方式可以控制搜索路径添加的位置：
# CMAKE_INCLUDE_DIRECTORIES_BEFORE,通过SET这个cmake变量为on,可以将添加的头文件搜索路径放在已有路径的前面
# 通过AFTER或BEFORE参数,也可以控制是追加还是置前
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/mylib)

#使用SET命令重新定义EXECUTABLE_OUTPUT_PATH变量来指定最终的二进制文件的位置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#发现一个目录下所有的源代码文件并将列表存储在一个变量中
AUX_SOURCE_DIRECTORY(./ DIR_SRCS)

ADD_EXECUTABLE(demo4 ${DIR_SRCS})

TARGET_LINK_LIBRARIES(demo4 Mylib)
