CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC_DIR = src/simples
BIN_DIR = bin
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)
TARGET = $(BIN_DIR)/programa

all: $(TARGET)

$(TARGET): $(OBJ) | $(BIN_DIR)
	$(CC) $(OBJ) -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

fclean: clean
	rm -rf $(BIN_DIR)

re: fclean all

.PHONY: all clean fclean re
