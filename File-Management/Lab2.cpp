#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("684244113.txt");

  // Write to the file
  MyFile << "684244113(Kritsakorn Thepank) ";

  // Close the file
  MyFile.close();
}