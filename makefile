all: compile run

compile:
	g++ -I ./include/ -o ./lib/BinarySearchTreeClass.o -c ./src/BinarySearchTreeClass.cpp
	g++ -I ./include/ -o ./lib/CellClass.o -c ./src/CellClass.cpp
	g++ -I ./include/ -o ./lib/TissueClass.o -c ./src/TissueClass.cpp
	g++ -I ./include/ -o ./lib/LimbClass.o -c ./src/LimbClass.cpp
	g++ -I ./include/ -o ./lib/SystemClass.o -c ./src/SystemClass.cpp
	g++ -I ./include/ -o ./lib/OrganismClass.o -c ./src/OrganismClass.cpp
	g++ -I ./include/ -o ./lib/ControlClass.o -c ./src/ControlClass.cpp
	g++ -I ./include/ -o ./lib/RadixClass.o -c ./src/RadixClass.cpp
	g++ -I ./include/ -o ./lib/QueueClass.o -c ./src/QueueClass.cpp
	g++ -I ./include/ -o ./lib/generalFunctions.o -c ./src/generalFunctions.cpp

	g++ -I ./include/ -o ./bin/main ./lib/BinarySearchTreeClass.o ./lib/CellClass.o ./lib/TissueClass.o ./lib/LimbClass.o ./lib/SystemClass.o ./lib/OrganismClass.o ./lib/ControlClass.o ./lib/RadixClass.o ./lib/QueueClass.o ./lib/generalFunctions.o ./src/main.cpp
run:
	./bin/main