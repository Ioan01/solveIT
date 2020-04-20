#include "resource.h"

map<string, string>strings;
map<string, int>integers;
map<string, float>floats;
map<string, short>shorts;
map<string, bool>booleans;
map<string, chr>arrays;

string& create_string(const string name, string value)
{
	 strings[name] = value; return strings[name];
}

int& create_int(const string name, int value)
{
	integers[name] = value; return integers[name];
}

float& create_float(const string name, float value)
{
	floats[name] = value; return floats[name];
}

bool& create_bool(const string name, bool value)
{
	booleans[name] = value; return booleans[name];
}

chr& create_array(const string name, string value)
{
	arrays[name] = value; return arrays[name]; 
}

string& find_str(const string name)
{
	 return strings[name]; 
}

int& find_int(const string name)
{
	return integers[name];
}

float& find_float(const string name)
{
	return floats[name];
}

bool& find_bool(const string name)
{
	return booleans[name];
}

chr& find_array(const string name)
{
	return arrays[name]; 
}

void basic_resources()
{
	create_bool("exit");
	create_bool("connected");


	create_int("state");
	create_array("username");
	create_array("password");
}

chr::chr(const string copy)
{
	strcpy(ptr, copy.c_str());
}

chr::~chr()
{
	delete[]ptr;
}

void chr::operator=(const string val)
{
	ptr = new char[val.size()];
	strcpy(ptr, val.c_str());
}