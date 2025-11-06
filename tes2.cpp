#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("text.txt", ios::in);

    char isi;
    string isiLengkap;
    while (!file.eof())
    {
        file.get(isi);
        isiLengkap += isi;
    }

    cout << isiLengkap;

    file.close();
    
  

    return 0;
}