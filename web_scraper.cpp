//  goal is to make a web scraper using c++
//  basically a refresher project about working with c++
#include <iostream>
#include "web_scraper.h"

using std::cout;
using std::endl;

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

