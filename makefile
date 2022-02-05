OBJS	= Student.o UnsortedList.o UnsortedListDr.o
SOURCE	= Student.cpp UnsortedList.cpp UnsortedListDr.cpp
HEADER	= Student.h UnsortedList.h
OUT	= UnsortedListDr
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Student.o: Student.cpp
	$(CC) $(FLAGS) Student.cpp 

UnsortedList.o: UnsortedList.cpp
	$(CC) $(FLAGS) UnsortedList.cpp 

UnsortedListDr.o: UnsortedListDr.cpp
	$(CC) $(FLAGS) UnsortedListDr.cpp 


clean:
	rm -f $(OBJS) $(OUT)
