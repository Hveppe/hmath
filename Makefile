# Define compiler and flags
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Ihmath

# Automatically find all .cpp files in hmath folder
HMATH_SRCS := $(shell find hmath -name '*.cpp')

# Convert all .cpp source files in hmath folder to object files
HMATH_OBJS := $(patsubst %.cpp,%.o,$(HMATH_SRCS))

# Main file (Rename to projekts main file)
MAIN := main.cpp

# Output executable name
TARGET := main

# Default rule
all: $(TARGET)

# Link hmath objects with compiled main.cpp
$(TARGET): $(HMATH_OBJS) $(MAIN)
	$(CXX) $(CXXFLAGS) $(HMATH_OBJS) $(MAIN) -o $(TARGET)

# Compile rule for hmath .cpp files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(HMATH_OBJS) $(TARGET)
