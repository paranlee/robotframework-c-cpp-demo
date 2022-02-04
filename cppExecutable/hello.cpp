#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    if( argc != 3 ) {
        cout << "Error: arguments not matched" << endl;
        return 1;
    }
    if( strlen(argv[1]) > 5 || strlen(argv[2]) > 5 ) {
        cout << "Error: Too many chracter" << endl;
        return 1;
    }

    string arg1(argv[1]), arg2(argv[2]);
    bool bool1 = 0 == arg1.compare("hello"), bool2 = 0 == arg2.compare("world");

    if(!bool1) {
        cout << "Error: First argument should hello." << endl;
    }

    if(!bool2) {
        cout << "Error: Second argument should world." << endl;
    }

    if(bool1 && bool2) {
        cout << arg1 << ", " << arg2 << endl;
    }

    return 0;
}
