CXX = x86_64-w64-mingw32-g++ #Windows
#CXX = g++ #Linux

runMascota : bin/mascota
	./bin/mascota

bin/mascota : src/main.cpp include/Mascota.hpp
	$(CXX) src/main.cpp -o bin/mascota -I include

cleanMascota : bin/mascota
	rm bin/mascota