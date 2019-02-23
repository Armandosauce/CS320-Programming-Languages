#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <exception>

using namespace std;

class Tokenizer{

  public:
    Tokenizer();
    ~Tokenizer();
    void Tokenize(string tokens);
    vector<string> GetTokens();

  private:
    vector<string> tokens;
};

