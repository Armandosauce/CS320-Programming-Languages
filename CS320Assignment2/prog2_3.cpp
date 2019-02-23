#include "prog2_3.hpp"

Parser::Parser() {
	
}

Parser::~Parser() {

}

bool Parser::Parse(vector<string> tokens) {
	bool parseError;
	for(int i=0;i<tokens.size();i++) {
	
	  cout << endl << "The tokens in the line are: " << tokens[i] <<" ";
	
	
		if (tokens[i]=="pop" || tokens[i]=="add" || tokens[i]=="sub" || 
				tokens[i]=="mul" || tokens[i]=="div" || tokens[i]=="mod" || 
				tokens[i]=="skip" && tokens.size() == 1) {
			
			
			
			return true;
		}
		else if (tokens[i]=="push" || tokens[i]=="save" || tokens[i]=="get" && tokens.size() == 2) {
		
		
		  return true;	
		} 
		else {
		  
		  
		  
		  
		  return false;
		  
		}
	}
}
