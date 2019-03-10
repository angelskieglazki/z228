/**
  * Created by max on 09.03.19.
  */

#pragma once

#include <iostream>
#include <vector>

using Args = std::vector<std::string>;

void error(int line, std::string& errMsg);

std::string int_to_string(int i);
int string_to_int(const std::string& s);
float string_to_float(const std::string& s);
bool is_number(const std::string& s);
bool is_float(const std::string& s);

void split(const std::string& s,Args& a,const char sp);
