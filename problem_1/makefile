OUTPUT = payslip_calculator
CXX = g++
CXXFLAGS = -Wall -std=c++11 -lm
SRC = payslip.cpp
all: $(OUTPUT)
$(OUTPUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC)
test: $(OUTPUT)
	./$(OUTPUT) test
clean:
	rm -f $(OUTPUT)
.PHONY: all clean test
