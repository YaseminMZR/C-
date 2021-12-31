all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/IkiYonluBagliListe.cpp -o ./lib/IkiYonluBagliListe.o
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
bagla:
	g++ ./lib/main.o ./lib/IkiYonluBagliListe.o ./lib/Dugum.o -o ./bin/program
calistir:
	./bin/program