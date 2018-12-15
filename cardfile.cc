#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
ifstream cardFile;
int name;

cardFile.open("cards.txt");
cout << "Reading data from the file.\n";

cardFile >> name;
cout << name << endl;

cardFile >> name;

cout << name << endl;

cardFile >> name;
cout << name << endl;

cardFile.close();
return 0;
}
