# hello world
采用的是Linux(ubuntu)系统开发，确认系统是否安装 gcc g++, 缺什么就安装什么。

## build
### 方法1
    g++ -o main main.cpp hello/hello.cpp world/world.cpp -I ./world
### 方法2
    g++ -c main.cpp -I ./world
    g++ -c hello/hello.cpp
    g++ -c world/world.cpp
    g++ -o main main.o hello.o world.o