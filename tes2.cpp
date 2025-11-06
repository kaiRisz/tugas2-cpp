#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("text.txt", ios::in);

    char isi2;
    string isiLengkap;
    while (!file.eof())
    {
        file.get(isi2);
        isiLengkap += isi2;
    }

    cout << isiLengkap;

    file.close();
    
  

    return 0;
}