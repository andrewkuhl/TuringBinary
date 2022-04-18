CC = g++
CFLAGS = 
LDFLAGS =
OBJFILES = input_handler.o main.o
TARGET = bt

all: $(TARGET)

$(TARGET): $(OBJFILES)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
		rm -f $(OBJFILES) $(TARGET) *~
