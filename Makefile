CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC_DIR = src/simples
BIN_DIR = bin
SRC = $(wildcard $(SRC_DIR)/*.c)
TARGETS = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRC))

all: $(TARGETS)

$(BIN_DIR)/%: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -f $(BIN_DIR)/*

.PHONY: all clean
