all: obj/bloqueled.o  exe
	g++ obj/bloqueled.o -o bin/bloqueled

obj/bloqueled.o:
	g++ -c src/test.cpp -o obj/bloqueled.o -Iinclude

library:
	ar rvs lib/libformas.a obj/punto.o obj/circulo.o

exe:
	g++ obj/bloqueled.o -o bin/bloqueled

clean:
	@echo "Cleaning"
	rm bin/*
	rm obj/*
	rm lib/*
