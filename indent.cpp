#include <iostream>
#include "unindent.h"
#include <fstream>
#include <string>
#include <cctype>


int countChar(std::string line, char c)
{
  int count = 0;
  for (int i = 0; i < line.length(); i++){
    if (line[i] == c)
      count++;
  }
  return count;
  
  if(line.find("{") < line.find("}") && line.find("{") != -1 && line.find("}") != -1){ 
        return count - 1;
    } else { 
        return count;
    }
  }

std::string indent(std::string line, int out, int in) { 
    std::string result = ""; 

    for(int i = 0; i < out - in; i++) { 
        result += "\t"; 
    }

    return result + line; 
}

// std::cout << countChar("hello{ world}{{{ ! ian}}}", '{') << "\n"; == 4



  /*
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
*/