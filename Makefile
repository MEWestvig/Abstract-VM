NAME     := avm

SRCS     := src/main.cpp src/linkedList.cpp src/Factory.cpp src/stackList.cpp \
			src/Commands.cpp exceptions/StackWayTooSmall.cpp \
			exceptions/MissingCommand.cpp exceptions/MissingFile.cpp \
			exceptions/AssertNotTrue.cpp exceptions/DivisionModuloByZero.cpp \
			exceptions/OverflowValue.cpp exceptions/UnderflowValue.cpp \
			exceptions/PopOnEmptyStack.cpp exceptions/StackTooSmall.cpp \
			exceptions/UnknownInstruction.cpp exceptions/NaN.cpp \
			operands/Double.cpp operands/Float.cpp operands/Int8.cpp \
			operands/Int16.cpp operands/Int32.cpp 
HDRS     := enums/eOperandType.hpp includes/Exceptions.hpp includes/Factory.hpp \
			includes/Includes.hpp includes/linkedList.hpp includes/Operands.hpp \
			includes/stackList.hpp includes/Commands.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
CXXFLAGS := -Wall -Werror -Wextra -std=c++11

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re
