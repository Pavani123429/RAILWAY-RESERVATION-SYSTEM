
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


# Project Output name
PROJECT_OUTPUT = $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

TEST_OUTPUT = $(call FixPath,$(BUILD)/Test_$(PROJECT_NAME).$(EXEC))

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -c 
	gcc $(SRC) $(INC) project_main.c -lm -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test: $(BUILD)
	gcc $(TEST_SRC) $(INC) -lm -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
	
valgrind:
	valgrind ./Test_$(PROJECT_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC) project_main.c
# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
