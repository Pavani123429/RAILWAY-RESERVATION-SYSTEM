PROJECT_NAME = main

SRC =src/add.c \
src/basicinfo.c \
src/delete.c \
src/display.c \
src/modify.c \
src/search.c \

BUILD = build

INC= inc
INC_TEST= unity

TEST_SRC=test/test.c\
unity/unity.c

ifdef OS
	RM=del
	FixPath=$(subst /,\,$1)
	EXEC=exe

else
	ifeq ($(shell uname),Linux)
		RM=rm -rf
		FixPath=$1
		EXEC=out
	endif

endif			

.PHONY: run clean test doc all

all:
	gcc -I $(INC) $(SRC) main.c -o $(call FixPath, $(PROJ_NAME).$(EXEC))


run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))	


cppcheck:
	cppcheck --enable= all $(SRC) main.c

debug:
	gcc -I $(INC) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)	 


