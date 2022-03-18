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

