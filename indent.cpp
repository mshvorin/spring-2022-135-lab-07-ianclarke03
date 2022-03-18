#include <iostream>
#include "unindent.h"
#include <fstream>
#include <string>
#include <cctype>


int countChar(std::string line, char c)
{
  int count = 0;
  for (int i = 0; i < line.length(); i++)
    {
    if (line[i] == c)
      count += 1;
      }
  return count;
}

// std::cout << countChar("hello{ world}{{{ ! ian}}}", '{') << "\n"; == 4



  
int main()
{
  std::ifstream if_file;
  std::string str;
  if_file.open("bad-code.cpp");
  
  while(getline(if_file, str)){
    std::cout << countChar(str, '{') << "\t" << removeLeadingSpaces(str);
  }

  if_file.close();
  

  return 0;
}
