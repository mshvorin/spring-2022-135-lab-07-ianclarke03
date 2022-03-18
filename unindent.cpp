//Task A. Removing indentation

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


std::string removeLeadingSpaces(std::string line)
{
  std::string newline;

  int n = 0;
  while (isspace(line[n])){
    n++;
  }
  newline += line.substr(n, (line.length() - n)) + "\n";

  
  return newline;
}







//_______________________________________________________________________________













/*

#include <iostream>
#include <fstream>

int main()
{
  std::ofstream out_file("hello.txt");
  out_file << "Hello, World!";
  //std::cout << "words";
  out_file.close();

  
  std::ifstream if_file("hello.txt");
  std::string str; //str is to store the line read
  getline(if_file, str);

  std::cout << str;
  if_file.close();
}


*/


/*
int num1;
int num2;
string firstName;
string lastName;
string fullName; 
ifstream inFile;

inFile.open("inputFile.txt");

while (getline(inFile, firstName))
    {
        inFile >> firstName >> lastName >> num1 >> num2;

        fullName = firstName + " " + lastName;

        cout << fullName << " " << num1 << " " << num2 << endl;
    }

inFile.close();
*/

  /*
  std::ofstream out_file("bad-code.cpp");
  out_file << "int main{}";
  std::cout << removeLeadingSpaces(out_file);
  out_file.close();
*/

  //getline(if_file, str);
  //if_file.open("bad-code.cpp"); Suppose fin is an object of ifstream. How to open a file called data.txt?

  /*for (int i = 0; i < line.length(); i++)
    {
      if (isspace(line[i]))
      newline += "";
      else //after it finds the first non-space character, start accumulating the characters into a new string, which will be returned.
      break;
    }*/