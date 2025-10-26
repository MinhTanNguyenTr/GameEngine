CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./core -I./engine -I./game -I./Utils

SRC = $(wildcard src/*.cpp core/*.cpp engine/*.cpp game/*.cpp Utils/*.cpp)
OBJ = $(SRC:.cpp=.o)

TARGET = maze

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
