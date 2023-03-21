build: compileLib compileMain link run run2

compileLib:
	gcc -c ../src/LinkedList.c -o ../obj/LinkedList.o
compileMain:
	gcc -c ../test/main.c -o ../obj/main.o
link:
	gcc ../obj/main.o ../obj/LinkedList.o -o ../bin/test
clear:
	clear	
run: ../bin/
run2: ./test