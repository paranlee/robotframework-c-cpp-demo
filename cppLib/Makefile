CC = g++
SRC = myLib.cpp
SO = myLib.so

$(SO): $(SRC)
	$(CC) -fPIC -shared -o $(SO) $(SRC)

clean:
	rm -f $(SO)
