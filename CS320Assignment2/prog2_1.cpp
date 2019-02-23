#include "prog2_1.hpp"

using namespace std;

Tokenizer::Tokenizer() {
}

Tokenizer::~Tokenizer() {
  tokens.clear();
}

void Tokenizer::Tokenize(string inputLine) 
{
  string currTok;

  stringstream ss(inputLine);

  while(getline(ss,currTok, ' ')) {
    
		if(currTok=="push") {
			tokens.push_back("push");
		}

		else if(currTok=="pop") {
			tokens.push_back("pop");
		}
		
		else if(currTok=="add") {
			tokens.push_back("add");
		}
	
		else if(currTok=="sub") {
			tokens.push_back("sub");
		}
	
		else if(currTok=="mul") {
			tokens.push_back("mul");
		}
	
		else if(currTok=="div") {
			tokens.push_back("div");
		}
	
		else if(currTok=="mod") {
			tokens.push_back("mod");
		}
	
		else if(currTok=="skip") {
			tokens.push_back("skip");
		}
	
		else if(currTok=="save") {
			tokens.push_back("save");
		}
	
		else if(currTok=="get") {
			tokens.push_back("get");
		}
	
		else if(currTok.find_first_not_of("0123456789")==string::npos) {
		  tokens.push_back(currTok);
		}

		else {
			throw std::runtime_error(std::string("Unexpected token: ") + currTok);
		}
  } //while        

}

vector<string> Tokenizer::GetTokens() 
{
  if (tokens.size() == 0) {
    throw std::runtime_error("No tokens");
  }
  return tokens;
}
