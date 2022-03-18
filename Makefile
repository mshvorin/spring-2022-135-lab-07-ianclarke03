main: main.o unindent.o

main.o: main.cpp unindent.h

unindent.o: unindent.cpp unindent.h

clean:
	rm -f main main.o unindent.o