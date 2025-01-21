CC = g++
CFLAGS = -std=c++17 -Wall -g

# Target: Executable file
abstractProgram: ./main.o ./Circle.o ./Square.o ./Triangle.o
	$(CC) $(CFLAGS) -o abstractProgram main.o Circle.o Square.o Triangle.o

# Rules for compiling object files
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Circle.o: Circle.cpp
	$(CC) $(CFLAGS) -c Circle.cpp

Square.o: Square.cpp
	$(CC) $(CFLAGS) -c Square.cpp

Triangle.o: Triangle.cpp
	$(CC) $(CFLAGS) -c Triangle.cpp

# Clean up build artifacts
clean:
	rm -f ./*.o abstractProgram