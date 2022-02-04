CC = gcc
SRC = myLib.c
SO = myLib.so

$(SO): $(SRC)
	$(CC) -fPIC -shared -o $(SO) $(SRC)

clean:
	rm -f $(SO)
