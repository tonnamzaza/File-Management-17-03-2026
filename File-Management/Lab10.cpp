#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;

    cout << "Enter file name: ";
    getline(cin, filename);   
    ifstream file(filename);

    if (!file) {
        cout << "Error: File not found or cannot open!" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
