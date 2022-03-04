COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out
DEPENDENCIES = Car.cpp main.cpp Lev.cpp Invoice.cpp Trucks.cpp Motorcycle.cpp Employees.cpp student.cpp Visitors.cpp vendor.cpp

all: $(PROGRAM)

$(PROGRAM): $(DEPENDENCIES)
	$(COMPILER) $(OPTIONS) $(DEPENDENCIES) -o $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM)
