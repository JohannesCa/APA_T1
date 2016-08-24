all:
	g++ *.cpp -std=c++11 -O0 -g3 -Wall -o apa-t1

clean:
	rm -f *~ && rm apa-t1

