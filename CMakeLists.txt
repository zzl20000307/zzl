
cmake_minimum_required(VERSION 3.0)
project(Eigen)

# 查找 Eigen 库
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_executable(MyEigen eigen_use.cpp)

# 链接 Eigen 库
target_link_libraries(MyEigen Eigen3::Eigen)
