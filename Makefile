TARGET = l3pbm
#Makefile petit projet avec skeletonc
CFLAGS = -g -Wall -pedantic -ansi
CC = gcc

$(TARGET): $(TARGET).c
	$(CC) $< $(CFLAGS) -o $@


edit:	$(TARGET).c
	vi $(TARGET).c

gdb:	$(TARGET)
	$(DEB) $(TARGET)

clean:
	rm $(TARGET)

