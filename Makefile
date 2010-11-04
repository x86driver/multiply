TARGET = multiply

all:$(TARGET)

multiply:multiply.c
	gcc -Wall -o $@ $< -lm -O2

clean:
	rm -rf $(TARGET)

