1: clean
	g++ --std=c++11 1.cpp -o 1
	./1

2: clean
	g++ --std=c++11 2.cpp -o 2
	./2

3: clean
	g++ --std=c++11 3.cpp -o 3
	./3

4: clean
	g++ --std=c++11 4.cpp -o 4
	./4

5: clean
	g++ --std=c++11 5.cpp -o 5
	./5

6: clean
	g++ --std=c++11 6.cpp -o 6
	./6

7: clean
	g++ --std=c++11 7.cpp -o 7
	./7

8: clean
	g++ --std=c++11 8.cpp -o 8
	./8

clean:
	@rm -rf 1
	@rm -rf 2
	@rm -rf 3
	@rm -rf 4
	@rm -rf 5
	@rm -rf 6
	@rm -rf 7
	@rm -rf 8
