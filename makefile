GCC=gcc
WALL=-Wall -g
FILEDIRECTORY=main.c myBank.c 
CLEAN=rm -f *.o
myBank:
	$(GCC) $(WALL) -o main.o $(FILEDIRECTORY)

runBank: myBank
		./main.o

clean:
	$(CLEAN)

all:runBank clean
	
git: 
	git add --all
	git commit -m "Add File to Project 2"
	git push