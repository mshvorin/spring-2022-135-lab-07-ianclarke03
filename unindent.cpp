//Task A. Removing indentation

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


std::string removeLeadingSpaces(std::string line)
{
  std::string newline;
  for (int i = 0; i < line.length(); i++)
    {
      if (isspace(line[i]))
      newline += "";
      else //after it finds the first non-space character, start accumulating the characters into a new string, which will be returned.
      newline += line[i];
    }
  return newline;
}


int main()
{
  /*
  std::ofstream out_file("bad-code.cpp");
  out_file << "int main{}";
  std::cout << removeLeadingSpaces(out_file);
  out_file.close();
*/

  std::ifstream if_file("bad-code.cpp");
  std::string str; //str is to store the line read
  //getline(if_file, str);
  removeLeadingSpaces(str);
  //if_file.open("bad-code.cpp"); Suppose fin is an object of ifstream. How to open a file called data.txt?
  if_file.close();
  

  return 0;
}



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