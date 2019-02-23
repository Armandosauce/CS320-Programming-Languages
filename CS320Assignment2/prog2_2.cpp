#include "prog2_1.hpp"

int main(int argc, char** argv) {

  std:cout << "Assignment #2-2, Armando Perez, armandoperez0001@gmail.com" << std::endl;

  char* filename = argv[1];
  string currLine;
  string output = "";
  int lineCount = 0;

  std::ifstream inputFile(filename);
  try {
		while (getline(inputFile, currLine)) {
			lineCount++;
			Tokenizer tokenizer;
						
			tokenizer.Tokenize(currLine);		
			vector<string> tokens = tokenizer.GetTokens();
			for(int i = 0; i < tokens.size(); i++) {
				if(i == tokens.size()-1) {
					output += tokens[i] + "\n";
				} else {
				  output += tokens[i] + ", ";
				}
			}
			
		} //while
	
		std::cout << output;
	} catch (std::runtime_error e) {
					std::cout << "Error on line " << lineCount << ": " <<e.what() << std::endl;
	}

}
