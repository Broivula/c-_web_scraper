#include <iostream>
#include <memory>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPResponse.h>
using std::endl;

class WebScraper{

  private:
    int number = 2;
  public:
    // constructor
    WebScraper();

    // destructor
    ~WebScraper();
  
    // other functions
    int _number();
    void print_number();

    bool fetch_page();
};
