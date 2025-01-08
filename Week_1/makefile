CC = g++
CFLAGS = -Wall -g

# Target: Executable file
myprogram: ./Shape_Main.o ./Circle.o ./Square.o
	$(CC) $(CFLAGS) -o abstractProgram Shape_Main.o Circle.o Square.o

# Rules for compiling object files
Shape_Main.o: Shape_Main.cpp
	$(CC) $(CFLAGS) -c Shape_Main.cpp

Circle.o: Circle.cpp
	$(CC) $(CFLAGS) -c Circle.cpp

Square.o: Square.cpp
	$(CC) $(CFLAGS) -c Square.cpp

# Clean up build artifacts
clean:
	rm -f ./*.o abstractProgram
