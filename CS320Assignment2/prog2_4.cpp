#include "prog2_3.hpp"
#include "prog2_1.hpp"

int main(int argc,char** argv)
{

	std:cout << "Assignment #2-4, Armando Perez, armandoperez0001@gmail.com" << std::endl;
	
	int lineCount=0;
	char* filename = argv[1];
	std::string currLine;
	std::string output;
	std::string nocomma;
	Parser parser;
	
	std::ifstream inputFile(filename);
  try {
		while (getline(inputFile, currLine)) {
			lineCount++;
			Tokenizer tokenizer;
						
			tokenizer.Tokenize(currLine);		
			std::vector<string> tokens = tokenizer.GetTokens();
			for(int i = 0; i < tokens.size(); i++) {
				if(i == tokens.size()-1) {
					output += tokens[i] + "\n";
					nocomma += tokens[i] + "\n";
				} else {
				  output += tokens[i] + ", ";
				  nocomma += tokens[i] + " ";
				}
			}
			
		} //while

    //parser
    
   
		lineCount = 0;
		stringstream ss(nocomma);
			
		while(getline(ss, currLine)) {
				lineCount++;
				Tokenizer tokenizer;
				tokenizer.Tokenize(currLine);
				std::vector<string> tokens = tokenizer.GetTokens();
				if (parser.Parse(tokens)) {
				}
				else {
				 string error;
		     error = accumulate(tokens.begin(), tokens.end(), error);
		     std::cout << "Parse error on line " << lineCount << ": " << error;
		     return 0;
		    }
		}
		
		std::cout << output;    
			
			} catch (std::runtime_error e) {
					std::cout << "Error on line " << lineCount << ": " <<e.what() << std::endl;
					return 0;
	}		

}

