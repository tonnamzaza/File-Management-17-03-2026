#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string A;
  cout << "Input Your File Name and Extension: ";
  cin >> A;
  // Create a text file
  ofstream MyWriteFile(A);

  // Write to the file
  string inf1 = "Files can be tricky, but it is fun enough-1";
  MyWriteFile << inf1;
  MyWriteFile << "Files can be tricky, but it is fun enough-2";

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