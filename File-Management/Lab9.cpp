#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string MyGroup;
    cout << "Input Your File Name and Extension: ";
    cin >> MyGroup;

    // Create a text file
    ofstream MyWriteFile(MyGroup);

    // Write to the file
    string MyFriend;
    int n = 5;

    // Loop to get 5 friends' names
    for (int i = 1; i <= n; i++) {
        cout << "Input Your Friend Name " << i << ": ";
        cin >> MyFriend;
        MyWriteFile << MyFriend << endl;
    }

    // Close the file
    MyWriteFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the same text file
    ifstream MyReadFile(MyGroup);

    // Read the file line by line
    while (getline(MyReadFile, myText)) {
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();
}