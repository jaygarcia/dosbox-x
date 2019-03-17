#include <stdio.h>
#include <string.h>
#include <assert.h>

extern "C" {
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char **argv) {
    ifstream i;

    if (argc > 1)
        i.open(argv[1],ios_base::in);
    else
        i.open("lua1.lua",ios_base::in);

    if (!i.is_open()) return 1;

    lua_State *LUA = luaL_newstate();
    assert(LUA != NULL);

    luaL_openlibs(LUA);

    int luaerr;
    char *blob;
    off_t sz;

    sz = 65536;
    blob = new char[sz]; /* or throw a C++ exception on fail */

    i.read(blob,sz-1);
    {
        streamsize rd = i.gcount();
        assert(rd < sz);
        blob[rd] = 0;
    }

    luaerr = luaL_loadstring(LUA, blob);
    if (luaerr) {
        fprintf(stderr,"LUA error: %s\n", lua_tostring(LUA, -1));
        lua_pop(LUA, 1);
        return 1;
    }

    delete[] blob;

    if (luaerr == 0) luaerr = lua_pcall(LUA, 0, 0, 0);

    if (luaerr) {
        fprintf(stderr,"LUA error: %s\n", lua_tostring(LUA, -1));
        lua_pop(LUA, 1);
    }

    assert(LUA != NULL);
    lua_close(LUA);
    i.close();
    return 0;
}
