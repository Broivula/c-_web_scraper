//  goal is to make a web scraper using c++
//  basically a refresher project about working with c++
#include <iostream>
#include "web_scraper.h"
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>
#include <Poco/Path.h>
#include <Poco/StreamCopier.h>
using Poco::Net::HTTPClientSession;
using Poco::Net::HTTPRequest;
using Poco::Net::HTTPResponse;
using Poco::URI;
using std::cout;
using std::endl;

using namespace Poco::Net;
using namespace Poco;
using namespace std;

WebScraper::WebScraper()
{
  cout << "constructor.." << endl;
}

WebScraper::~WebScraper()
{
  cout << "web_scraper destructor..." << endl;
}

int WebScraper::_number()
{
  return number;
}

void WebScraper::print_number()
{
  cout << "the private number is: " << _number() << ", yay!" << endl;
}

bool WebScraper::fetch_page()
{
  try
  {
    URI uri("https://yle.fi/uutiset");
    HTTPClientSession session(uri.getHost(), uri.getPort());

    string path(uri.getPathAndQuery());
    if (path.empty()) path = "/";

    HTTPRequest req(HTTPRequest::HTTP_GET, path, HTTPMessage::HTTP_1_1);
    session.sendRequest(req);

    HTTPResponse res;
    istream &is = session.receiveResponse(res);
    StreamCopier::copyStream(is, cout);
  }catch (Exception &ex)
  {
    cerr << ex.displayText() << endl;
    return false;
  }
  return true;
}

