bin/main : src/main.cpp	
	c++ src/main.cpp -o bin/main -I include -lcurses

run : bin/main
	./bin/main

clean : bin/main
	rm bin/main