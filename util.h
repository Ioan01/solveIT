#pragma once
#include <ctime>
#include <string>
#include <sstream>
#include "requests.h"
#define DELAY 40
using namespace std;

extern std::time_t t;
extern std::tm* now;

extern bool shift;
extern bool space;
extern bool enter;

void init_time();


string istr(const int a);

string fstr(const float a);

int stri(string a);

float strf(string a);










