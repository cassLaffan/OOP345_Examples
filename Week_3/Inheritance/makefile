CC = g++
CFLAGS = -Wall -g

# Target: Executable file
InheritProgram: ./Person.o ./Student.o ./Employee.o ./main.o
	$(CC) $(CFLAGS) -o InheritProgram Person.o Student.o Employee.o main.o

# Rules for compiling object files
Person.o: Person.cpp
	$(CC) $(CFLAGS) -c Person.cpp

Student.o: Student.cpp
	$(CC) $(CFLAGS) -c Student.cpp

Employee.o: Employee.cpp
	$(CC) $(CFLAGS) -c Employee.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

# Clean up build artifacts
clean:
	rm -f ./*.o InheritProgram
