TARGET = physics
LIB = ./lib
INCLUDE = ./include
SRC = ./src/
OBJ = ./obj/

COMPILE_FLAGS = -Wall
LINK_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system

CPP_FILES = $(wildcard */*.cpp */*/*.cpp)
objects = $(CPP_FILES:$(src_dir)/%.cpp=$(obj_dir)/%.o)

all: compile

compile: $(objects)
	g++ -std=c++20 -I$(INCLUDE) -o $(TARGET).exe $^ -L$(LIB) $(LINK_FLAGS)


