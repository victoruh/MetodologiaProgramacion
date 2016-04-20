all: obj/bloqueLed.o  obj/test.o exe

obj/test.o:
	g++ -c src/test.cpp -o obj/test.o -Iinclude

obj/bloqueLed.o:
	g++ -c src/bloqueLed.cpp -o obj/bloqueLed.o -Iinclude

exe:
	g++ obj/bloqueLed.o obj/test.o -o bin/main -Iinclude

clean:
	@echo "Cleaning"
	rm -rf obj/*
	rm -rf lib/*	

mrproper: clean
	rm -rf bin/*
