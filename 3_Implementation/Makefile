
SRC = main.c\
src/cquizgame.c
INC = inc
run1 : $(SRC) 
	gcc $^ -I$(INC) -o $@

run : run1
	./run1

clean:
	rm run1
