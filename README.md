# hello world
采用的是Linux(ubuntu)系统开发，确认系统是否安装 gcc g++ make cmake, 缺什么就安装什么。

## build
    # 1. 下载 googletest 源码
    # 2. 将源码放到 thirdpart 目录
    # 3. 将 googletest 添加到项目中
    mkdir build
    cd build
    # 执行cmake 生成 makefile
    cmake ..
    make # 编译日志中可以看到 gtest 参与到编译中，生成了 libgtest.a 与 libgetest_main.a
    # 返回源码目录
    cd ${OLDPWD}