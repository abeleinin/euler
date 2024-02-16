# Makefile for building a simple C++ project

# Compiler settings - Can change according to your system
CXX=g++
CXXFLAGS=-std=c++20 -Wall

# Target executable name
TARGET=main

# Build target
$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o

# Compile the source files into object files
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Clean target
clean:
	rm -f $(TARGET) *.o

# Phony targets
.PHONY: clean
