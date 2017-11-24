#pragma once

#include <tuple>
#include <vector>
#include <string>

class Request{
private:
	std::string URL;
	std::string buffer;
public:
  Request();
  ~Request();
  std::vector<std::tuple<std::string, std::string > > arguments;
  std::vector<std::string> headers;
  void addForm(const std::string & name,const std::string & data);
  void addHeader(const std::string &headerfield);
  void setURL(const std::string &URL);
  std::string getURL() const;
  std::string & getBuffer();
  std::string * getBufferPointer();
};
