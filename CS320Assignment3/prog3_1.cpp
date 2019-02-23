#include <iostream>
#include <lua.hpp>

int main(int argc, char** argv)
{
	std::cout << "Assignment #3-1, Armando Perez, armandoperez0001@gmail.com" << std::endl;

  lua_State *state = luaL_newstate();

  luaL_openlibs(state);

  int result;

  result = luaL_loadfile(state, argv[1]);
	result = lua_pcall(state, 0, LUA_MULTRET, 0);
}


