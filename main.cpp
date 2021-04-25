#include "web_scraper.h"

using std::unique_ptr;

int main(){
  unique_ptr<WebScraper> web_scraper;

  web_scraper.reset(new WebScraper());

  web_scraper->print_number();
  return 0;
}
