#makefile para compilar:
#test_3tareas.exe
CC = gcc.exe
RM = rm.exe

all:test_3tareas.exe

test_3tareas.exe:os.o porject_test.o
	${CC} os.o porject_test.o -o $@

clean:
	${RM} *.o