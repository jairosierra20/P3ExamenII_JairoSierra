main.out: Main.o Militar.o NodoArbol.o
	g++ Main.o Militar.o NodoArbol.o -lncurses -o main.out
main.o: Main.cpp Militar.cpp NodoArbol.cpp
	g++ -c 	main.cpp
