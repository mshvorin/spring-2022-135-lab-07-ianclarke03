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
  
  int out_brace = 0;
  int in_brace = 0;
  fin.open("bad-code.cpp");


  while(getline(fin, line)) { 
        in_brace = countChar(line, '}') + in_brace;
        std::string unindented_line = removeLeadingSpaces(line);
        std::cout << indent(unindented_line, out_brace, in_brace) << std::endl;
        out_brace = countChar(line, '{') + out_brace;
    }
  
  fin.close();


  std::string line2;
  
  out_brace = 0;
  in_brace = 0;
  fin.open("bad-code2.cpp");

  while(getline(fin, line2)) { 
        in_brace = countChar(line2, '}') + in_brace;
        std::string unindented_line2 = removeLeadingSpaces(line2);
        std::cout << indent(unindented_line2, out_brace, in_brace) << std::endl;
        out_brace = countChar(line2, '{') + out_brace;
    }
  fin.close();

  return 0;
}
