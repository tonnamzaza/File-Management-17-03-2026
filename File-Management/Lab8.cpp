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
  cout << "Input Your Friend Name: ";
  cin >> MyFriend;
  MyWriteFile << MyFriend;

  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("Readfile.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }

  // Close the file
  MyReadFile.close();
}