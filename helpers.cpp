/**
  * Created by max on 09.03.19.
  */

#include <algorithm>
#include <sstream>
#include "helpers.h"

void error(int line, std::string& errMsg) {
  std::cout << "\nERROR! Line " << line << ": " << errMsg << ";\n";
  exit(19);
}

std::string int_to_string(int i) {
  return std::to_string(i);
}

int string_to_int(const std::string& s) {
  std::istringstream stream(s);
  auto number = 0;
  stream >> number;
  if (stream.fail()) throw 1;
  return number;
}

float string_to_float(const std::string& s) {
  std::istringstream stream(s);
  auto number = 0.0f;
  stream >> number;
  if (stream.fail()) throw 1;
  return number;
}

bool is_number(const std::string& s) {
  return !s.empty() && std::find_if(s.begin(), s.end(),
      [](char c) { return !std::isdigit(c); }) == s.end();
}

bool is_float(const std::string& s) {
  std::stringstream sstr(s);
  float f;
  return !((sstr >> std::noskipws >> f).rdstate() ^ std::ios_base::eofbit);
}

void split(const std::string& s, Args& arr, const char delimiter) {
  std::string token;
  std::istringstream tokenStream(s);
  while (std::getline(tokenStream, token, delimiter))
  {
    arr.push_back(token);
  }
  }
