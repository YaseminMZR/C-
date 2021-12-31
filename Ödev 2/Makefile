all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/DogruKuyrugu.cpp -o ./lib/DogruKuyrugu.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/Nokta.cpp -o ./lib/Nokta.o
	g++ -c -I "./include" ./src/AVLDugum.cpp -o ./lib/AVLDugum.o
	g++ -c -I "./include" ./src/AVLAgaci.cpp -o ./lib/AVLAgaci.o
bagla:
	g++ ./lib/AVLDugum.o ./lib/AVLAgaci.o ./lib/Nokta.o ./lib/Dugum.o ./lib/DogruKuyrugu.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program