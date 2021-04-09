# comments

#Target : dependency
#<TAB>Command


PROJECT_NAME = cricket.exe
SRC = cricket.c

INC = unity

TEST = unity/unity.c

$(PROJECT_NAME) : $(SRC) $(TEST)
	gcc -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	$(PROJECT_NAME)