
PROJ_NAME = main
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/bsort.c \
src/ssort.c \
src/isort.c \
src/quicksort.c \






INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))



clean:
	
	$(RM) *.$(EXEC)
	


