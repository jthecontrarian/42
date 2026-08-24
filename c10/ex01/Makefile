CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat

CFILES = main.c
OFILES = main.o

all: $(TARGET)

$(TARGET): $(OFILES)
	$(CC) $(OFILES) -o $(TARGET)

$(OFILES): $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES) -o $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(TARGET)
