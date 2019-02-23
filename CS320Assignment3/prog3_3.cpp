#include <iostream>
#include <lua.hpp>
#include <string>

int main(int argc, char** argv)
{
	std::cout << "Assignment #3-3, Armando Perez, armandoperez0001@gmail.com" << std::endl;
  
  lua_State *state = luaL_newstate();
  
  luaL_openlibs(state);
  
  luaL_loadfile(state, argv[1]);
	lua_pcall(state, 0, LUA_MULTRET, 0);
  
  luaL_dostring(state, "str = io.read()");
  luaL_dostring(state, "print(InfixToPostfix(str))");
  std::cout << luaL_checkstring(state, 0);
  
}
