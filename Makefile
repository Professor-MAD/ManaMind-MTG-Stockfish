# Compiler and Flags
CC = clang
CFLAGS = -Wall -Wextra -std=c17

# Source Files
SOURCES = main.c cards.c game_logic.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = game-engine.exe

# Build Target
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q *.o $(EXECUTABLE)
