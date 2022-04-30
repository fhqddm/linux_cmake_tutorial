CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(demo3)

# ADD_SUBDIRECTORY(src_dir [binary_dir] [EXCLUDE_FROM_ALL])
# 向当前工程添加存放源文件的子目录,并可以指定中间二进制和目标二进制的存放位置
# EXCLUDE_FROM_ALL含义：将这个目录从编译过程中排除
ADD_SUBDIRECTORY(./mylib)

AUX_SOURCE_DIRECTORY(./ DIR_SRCS)

ADD_EXECUTABLE(demo3  ${DIR_SRCS})

#为target添加需要链接的共享库
TARGET_LINK_LIBRARIES(demo3 Mylib)
