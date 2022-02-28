COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
DEPENDENCIES = Car.cpp main.cpp Lev.cpp Invoice.cpp

all: $(PROGRAM)

$(PROGRAM): $(DEPENDENCIES)
	$(COMPILER) $(OPTIONS) $(DEPENDENCIES) -o $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)
