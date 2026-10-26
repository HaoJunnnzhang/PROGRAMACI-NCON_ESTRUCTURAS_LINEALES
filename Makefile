# Autor: (poned aquí vuestro nombre)
CXX      = c++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -Wshadow -g -Iinclude
SANFLAGS = -fsanitize=address

# Módulos (sin main): añadid aquí cada .cpp de src/ que no sea main.cpp
MODULOS  = src/contador.cpp
# Una batería por módulo: tests/test_<modulo>.cpp
PRUEBAS  = $(wildcard tests/test_*.cpp)
BIN_PRUEBAS = $(patsubst tests/%.cpp,build/%,$(PRUEBAS))

.PHONY: all test san clean

all: reparto

reparto: src/main.cpp $(MODULOS)
	$(CXX) $(CXXFLAGS) $(SANFLAGS) $^ -o $@

build/%: tests/%.cpp $(MODULOS) | build
	$(CXX) $(CXXFLAGS) $(SANFLAGS) $^ -o $@

build:
	mkdir -p build

# Ejecuta todas las baterías; falla si alguna falla
test: $(BIN_PRUEBAS)
	@for t in $(BIN_PRUEBAS); do echo "== $$t"; ./$$t || exit 1; done
	@echo "Todas las pruebas pasan"

# Pruebas + ficheros de órdenes de datos/, con el detector de memoria
san: reparto test
	@for f in $(wildcard datos/*.txt); do echo "== $$f"; ./reparto < $$f > /dev/null || exit 1; done
	@echo "make san limpio"

clean:
	rm -rf reparto build
