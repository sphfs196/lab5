hugeint:main.o hugeint.o
	g++ -o hugeint main.o hugeint.o
main.o:main.cpp hugeint.h
	g++ -c main.cpp
hugeint.o:hugeint.cpp hugeint.h
	g++ -c hugeint.cpp
clean:
	rm main.o hugeint.o
