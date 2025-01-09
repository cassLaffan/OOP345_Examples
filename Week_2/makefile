CC = g++
CFLAGS = -Wall -g

# Target: Executable file
linkageProgram: ./Linkage_A.o ./Linkage_B.o
	$(CC) $(CFLAGS) -o LinkageProgram Linkage_A.o Linkage_B.o

# Rules for compiling object files
Linkage_A.o: Linkage_A.cpp
	$(CC) $(CFLAGS) -c Linkage_A.cpp

Linkage_B.o: Linkage_B.cpp
	$(CC) $(CFLAGS) -c Linkage_B.cpp

# Clean up build artifacts
clean:
	rm -f ./*.o LinkageProgram
