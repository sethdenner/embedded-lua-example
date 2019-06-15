#ifdef __cplusplus
#include <lua5.3/lua.hpp>
#else
#include <lua5.3/lua.h>
#include <lua5.3/lualib.h>
#include <lua5.3/lauxlib.h>
#endif

int main() {
  lua_State *state = luaL_newstate();
  lua_close(state);
  return 0;
}
