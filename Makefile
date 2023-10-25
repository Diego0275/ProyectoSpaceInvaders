bin/cow : src/main.cpp	
	c++ src/main.cpp -o bin/main -I include -lcurses

run : bin/main
	./bin/main

# cleanMascota : bin/main
# 	rm bin/main