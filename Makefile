NAME     := avm

SRCS     := src/main.cpp src/linkedList.cpp \
			exceptions/MissingCommand.cpp exceptions/MissingFile.cpp \
			exceptions/AssertNotTrue.cpp exceptions/DivisionModuloByZero.cpp \
			exceptions/OverflowValue.cpp exceptions/UnderflowValue.cpp \
			exceptions/PopOnEmptyStack.cpp exceptions/StackTooSmall.cpp \
			exceptions/UnknownInstruction.cpp operands/Double.cpp \
			operands/Float.cpp operands/Int8.cpp operands/Int16.cpp \
			operands/Int32.cpp
HDRS     := 
OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
CXXFLAGS := -Wall -Werror -Wextra

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
