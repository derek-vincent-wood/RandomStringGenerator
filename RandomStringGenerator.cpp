#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(int argc, char *argv[])
{
  if (argc != 4)
  {
    cout << "Error, invalid input. The arguments provided to the command should be formatted as follows:" << endl;
    cout << "NUMBER_OF_PASSWORDS(DIGIT) LENGTH_OF_EACH_PASSWORD(DIGIT) FILENAME(STRING)" << endl;
    return 0;
  }
  int numPasswords = atoi(argv[1]);
  int lenPasswords = atoi(argv[2]);
  ofstream outputFile; //create file object to store passwords in
  outputFile.open(argv[3]); //open the file
  string password;
  srand (time(0));
  for (int i = 0; i < numPasswords; i++)
  {
    password = "";


    for (int j = 0; j < lenPasswords; j++)
    {
      password += (char)((rand()%94) + 33);
    }
    outputFile << password << endl;
  }
  return 0;

}
