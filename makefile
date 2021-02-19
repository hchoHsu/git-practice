test: main.o func2.o; g++ -o test main.o func2.o

main.o: main.cpp function2.h; g++ -c main.cpp

func2.o: function2.cpp function2.h; g++ -c -o func2.o function2.cpp 
