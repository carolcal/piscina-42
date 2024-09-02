CC      = cc
CFLAGS= -Wall -Wextra -Werror
LDFLAGS = $(CFLAGS)
RM      = rm -rf
NAME	= rush-02
OBJS	= consult.o filter_dict.o organize.o read_dict.o utils.o

all: $(NAME) clean

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) main.c $(OBJS) -o $(NAME)

%.o: %.c <br>
	$(COMPILE.c) $(OUTPUT_OPTION) $<<br>

%: %.o <br>
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@<br>

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all