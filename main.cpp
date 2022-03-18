#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "unindent.h"
#include "indent.h"
  
int main()
{
  std::ifstream fin;

  
  if(fin.fail()){ 
        std::cerr << "File cannot be opened"; 
        exit(1);
  }

  
  std::string line;
  //int open_brace = 0;
  //int close_brace = 0; 
  
  int out_brace = 0;
  int in_brace = 0;
  fin.open("bad-code.cpp");


  /*
  while(getline(fin, str)){
    std::cout << removeLeadingSpaces(str);
  }

  

  while(getline(fin, str)){
    std::cout << countChar(str, '{', '}') << "\t" << removeLeadingSpaces(str);
    }
*/
/*
while(getline(fin, line)) { 
  open_brace = countChar(line, '}') + open_brace;
  
  std::string unindented_line = removeLeadingSpaces(line);
  
  std::cout << indent(unindented_line, open_brace, close_brace) << std::endl;
  
  close_brace = countChar(line, '{') + close_brace;
}
*/
  while(getline(fin, line)) { 
        in_brace = countChar(line, '}') + in_brace;
        std::string unindented_line = removeLeadingSpaces(line);
        std::cout << indent(unindented_line, out_brace, in_brace) << std::endl;
        out_brace = countChar(line, '{') + out_brace;
    }
  
  fin.close();
  

  return 0;
}
