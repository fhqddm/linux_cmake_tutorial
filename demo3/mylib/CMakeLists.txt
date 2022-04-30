aux_source_directory(. DIR_LIB_SRCS)

#生成动态库或静态库
add_library(Mylib STATIC ${DIR_LIB_SRCS})

