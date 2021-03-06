# CSE109
# Cole Tomlinson
# cmt218
# Trie data structure program
# Program 3

OBJ= prog3.o node.o link.o tri.o
OPTS= -g -c  -Wall -Werror

testtrie: $(OBJ)
	g++ -o testtrie $(OBJ)

prog3.o: prog3.cc  
	g++ $(OPTS) prog3.cc

node.o: node.cc node.h
	g++ $(OPTS) node.cc

link.o: link.cc link.h
	g++ $(OPTS) link.cc

trie.o: trie.cc trie.h
	g++ $(OPTS) trie.cc

tri.o: tri.cc tri.h
	g++ $(OPTS) tri.cc

clean:
	rm testtrie *.o