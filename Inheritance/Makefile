output:user.o Car.o
	g++ user.o Car.o  output


user.o: user.c++
	g++ -c user.c++

Car.o: Car.c++ Car.h
	g++ -c Car.c++

Vehicle.o: Vehicle.c++ Vehicle.h
	g++ -c Vehicle.c++

clean:
	del /f *.o output.exe

run:
	output
