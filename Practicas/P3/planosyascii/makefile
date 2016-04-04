
SRC = src
INC = include
OBJ = obj
BIN = bin
LIB = lib

CXX = g++
CPPFLAGS = -Wall -g -c -I$(INC)


all: $(BIN)/arteASCII $(BIN)/testarteASCII $(BIN)/testplano $(BIN)/testimagen

$(BIN)/arteASCII:

$(BIN)/testarteASCII:

$(BIN)/testplano:

$(BIN)/testimagen: $(OBJ)/imagen.o $(OBJ)/pgm.o $(OBJ)/testimagen.o
	$(CXX) $(OBJ)/imagen.o $(OBJ)/pgm.o $(OBJ)/testimagen.o -o $(BIN)/testimagen

# ************* CODIGOS OBJETO ******************* #
$(OBJ)/pgm.o:
	$(CXX) $(CPPFLAGS) $(SRC)/pgm.cpp -o $(OBJ)/pgm.o

$(OBJ)/imagen.o:
	$(CXX) $(CPPFLAGS) $(SRC)/imagen.cpp -o $(OBJ)/imagen.o

$(OBJ)/testimagen.o:
	$(CXX) $(CPPFLAGS) $(SRC)/testimagen.cpp -o $(OBJ)/testimagen.o

# ***************** LIBRERIAS ***************** #
$(LIB)/libimagen: $(OBJ)/imagen.o $(OBJ)/pgm.o
	ar rvs $(LIB)/libimagen.a $(OBJ)/imagen.o $(OBJ)/pgm.o

# ************ documentación *******
documentacion:
	doxygen doc/doxys/Doxyfile

# ************ Limpieza ************
clean:
	rm $(BIN)/*
	rm $(OBJ)/*
