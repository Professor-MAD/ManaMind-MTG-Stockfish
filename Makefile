# Compiler and Flags
CC = clang
CFLAGS = -Wall -Wextra -std=c17 -Iinclude

# Source Files
SRCDIR = src
INCDIR = include
BUILDDIR = build
SOURCES = $(SRCDIR)/main.c $(SRCDIR)/cards.c $(SRCDIR)/hand.c $(SRCDIR)/game_logic.c $(SRCDIR)/green_deck.c $(SRCDIR)/card_helpers.c $(SRCDIR)/red_deck.c $(SRCDIR)/ascii_art.c $(SRCDIR)/player.c
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%.o, $(SOURCES))
EXECUTABLE = $(BUILDDIR)/game-engine.exe

# Build Target
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@if not exist $(BUILDDIR) mkdir $(BUILDDIR)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@if not exist $(BUILDDIR) mkdir $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@if exist $(BUILDDIR) rmdir /S /Q $(BUILDDIR)
