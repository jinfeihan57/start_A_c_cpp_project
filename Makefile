# makefile

main: main.o hello.o world.o
	g++ -o main main.o hello.o world.o

main.o: main.cpp hello/hello.h world/world.h
	g++ -c main.cpp -I world

hello.o: hello/hello.cpp hello/hello.h
	g++ -c hello/hello.cpp

world.o: world/world.cpp world/world.h
	g++ -c world/world.cpp

clean:
	rm -rf main main.o hello.o world.o
