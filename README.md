# hello world
采用的是Linux(ubuntu)系统开发，确认系统是否安装 gcc g++ make cmake, 缺什么就安装什么。

## build
    # 创建编译目录
    mkdir build
    cd build
    # 执行cmake 生成 makefile
    cmake ..
    make
    # 返回源码目录
    cd ${OLDPWD}