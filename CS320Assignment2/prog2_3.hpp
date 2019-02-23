#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <exception>
#include <numeric>

using namespace std;

class Parser
{
public:
	Parser();
	~Parser();
	bool Parse(vector<string> tokens);
};
