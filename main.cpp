#include "web_scraper.h"
using std::unique_ptr;


int main(){

  bool result;

  unique_ptr<WebScraper> web_scraper;
  web_scraper.reset(new WebScraper());
  result = web_scraper->fetch_page();

  std::cout << "result is: " << result << std::endl;
  return 0;
}
