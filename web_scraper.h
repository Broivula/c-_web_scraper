#include <iostream>
#include <memory>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPResponse.h>
using std::endl;
using std::string;

class WebScraper{

  private:
    int number = 2;
    const char *page_urls[2] = {"https://www.yle.fi/uutiset", "http:://www.iltalehti.fi"};

  public:
    // constructor
    WebScraper();

    // destructor
    ~WebScraper();
  
    // other functions
    int _number();
    void print_number();
    string return_page_url(int src);
    bool fetch_page(int src);
};
