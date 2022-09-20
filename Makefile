CXXFLAGS = -Wall

main: main.o box.o
	g++ $(CXXFLAGS) -o main main.o box.o
main.o: main.cpp box.h
	g++ $(CXXFLAGS) -c main.cpp
box.o: box.cpp box.h
	g++ $(CXXFLAGS) -c  box.cpp
clean:
	rm *o