PROJECT_NAME = Meal_Magic

BUILD = build

SRC = ordersys.c\
src/orderit.c\

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

#TEST_SRC = ordersys.c\
test/ordersys_test.c\
unity/unity.c\

#TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).exe

INC	= -Iinc\

#INCLUDE_LIBS =

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).exe

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

#.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).exe

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).exe

#test:$(BUILD)
#	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
#	./$(TEST_OUTPUT)
#Coverage
#coverageCheck:$(BUILD)
#	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
#	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

$(BUILD):
	mkdir build