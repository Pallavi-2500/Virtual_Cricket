# Name of the project
PROJECT_NAME = cricket

# Output directory
BUILD = build

# All source code files
SRC = Main.c\
src/batting.c\
src/cricket.c\
src/menu.c\
src/result.c\
src/toss.c\

# All test source files
TEST_SRC = test/test_cricket.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

# Project Output name
PROJECT_OUTPUT = $(call FixPath,$(PROJ_NAME).$(EXEC))

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all


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

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
doc:
	make -C ./documentation

cppcheck: $(SRC)
	cppcheck --enable=all $(SRC)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build