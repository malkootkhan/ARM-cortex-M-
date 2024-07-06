CC = gcc
DFLAGS = -g  # Enable debug symbols for gdb debugging

TARGET = output
SRC = ARM_interrupt.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(DFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
