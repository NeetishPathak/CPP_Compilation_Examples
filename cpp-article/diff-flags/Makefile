all: main.o increment1.o increment2.o 
	g++ -o main main.o increment1.o increment2.o 

main.o: main.cpp Counters.hpp increment1.hpp increment2.hpp
	g++ -c $(CFLAGS) main.cpp

increment1.o: increment1.cpp Counters.hpp
	g++ -c $(CFLAGS) increment1.cpp

increment2.o: increment2.cpp Counters.hpp
	g++ -c $(CFLAGS) increment2.cpp

clean: 
	rm -rf *.o *.ii main

