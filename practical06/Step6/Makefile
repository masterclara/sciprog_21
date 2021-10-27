CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm
#comment lines

all: mmc 

#linking
mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mmc main.o mm.o $(LDFLAGS)   

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o  

#shortcuts: 
# $@ : name of target 	
# $^ : all prerequisites
# $< : only first prerequisite