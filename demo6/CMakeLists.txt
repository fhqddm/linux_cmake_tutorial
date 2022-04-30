#指定cmake版本
cmake_minimum_required(VERSION 3.0) 

#填写你的项目名字
project(testcv) 

#定位opencv包，不需要改
find_package( OpenCV REQUIRED ) 

 #设置opencv引用路径，不需要改
include_directories( ${OpenCV_INCLUDE_DIRS} )

 #生成可执行文件，改称你自己的cpp源文件名和要生成的可执行文件名
add_executable(testcv test.cpp)

#设置链接库路径，前面改称你自己的项目名
target_link_libraries( testcv ${OpenCV_LIBS} ) 
