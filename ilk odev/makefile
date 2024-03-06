tum:derle bagla calistir

derle:
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o./lib/SayiListesi.o -c ./src/SayiListesi.cpp
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/Basamak.o -c ./src/Basamak.cpp
                   
bagla:
	g++ -I ./include/ -o ./bin/Test ./lib/Dugum.o ./lib/SayiListesi.o ./lib/Sayi.o ./lib/Basamak.o ./src/Test.cpp 
	
calistir:
	./bin/Test