all:
	g++ *.cpp -std=c++11 -O3 -g3 -Wall -o apa-t1

clean:
	rm -f *~ *out && rm apa-t1 && rm -rf Outputs

