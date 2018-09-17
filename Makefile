all: Client.cpp MathSoftware.cpp
	g++ -std=c++17 Client.cpp MathSoftware.cpp -o HW2

clean:
	rm HW2
