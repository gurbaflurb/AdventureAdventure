generate:
	@echo "Compiling src files..."
	g++ -c src/creature.cpp -o src/creature.o
	g++ -c src/item.cpp -o src/item.o
	g++ -c src/player.cpp -o src/player.o
	g++ -c src/gameTools.cpp -o src/gameTools.o
	@echo "Compiling executable"
	g++ -pthread src/source.cpp src/*.o -O2 -o main
