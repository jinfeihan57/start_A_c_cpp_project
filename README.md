# hello world
采用的是Linux(ubuntu)系统开发，确认系统是否安装 gcc g++ make cmake, 缺什么就安装什么。

# 注意事项
部分同学在编译后运行程序会报加载动态库失败的问题，这是因为可执行程序找不到我们编译的动态库导致的。
解决方法1：
    将我们编译的动态库添加到 LD_LIBRARY_PATH 环境变量中；
解决方法2：
    在我们执行cmake的时候添加参数 -DCMAKE_SKIP_RPATH=FALSE

## build
    mkdir build
    cd build
    # 执行cmake 生成 makefile
    cmake .. -L -DCMAKE_SKIP_RPATH=FALSE
    make
    # 执行测试用例
    # 执行 ctest OR make test
    # 或者进入tests目录 ./test_hello（可查看gtest详细日志）
    # 返回源码目录
    cd ${OLDPWD}