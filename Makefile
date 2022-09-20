CXXFLAGS = -Wall

main: main.o taskfunctions.o
	g++ $(CXXFLAGS) -o main main.o taskfunctions.o
main.o: main.cpp taskfunctions.h
	g++ $(CXXFLAGS) -c main.cpp
taskfunctions.o: taskfunctions.cpp taskfunctions.h
	g++ $(CXXFLAGS) -c  taskfunctions.cpp
clean:
	rm *o