all: compile run

compile:
	g++ -I ./include/ -o ./lib/library.o -c ./src/library.cpp

	g++ -I ./include/ -o ./bin/main ./lib/library.o  -g ./src/main.cpp
run:
	./bin/main