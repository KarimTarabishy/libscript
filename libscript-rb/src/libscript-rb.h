
#ifndef LIBSCRIPT_PY_H
#define LIBSCRIPT_PY_H

script_plugin_state script_plugin_init_rb(script_env* env);
int script_plugin_run_rb(script_plugin_state state, char* programtext);
int script_plugin_call_rb(script_plugin_state state, char* fn);
void script_plugin_done_rb(script_plugin_state state);

#endif