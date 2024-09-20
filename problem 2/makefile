OUTPUT = quadratic_solver
CXX = g++
CXXFLAGS = -Wall -std=c++11 -lm
SRC = quadratic.cpp
all: $(OUTPUT)
$(OUTPUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC)
clean:
	rm -f $(OUTPUT)
