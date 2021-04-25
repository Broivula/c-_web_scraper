HEADERS = web_scraper.h
OBJECTS = main.o web_scraper.o
COMPILER = g++

default: web_scraper

web_scraper.o: web_scraper.cpp ${HEADERS}
	${COMPILER} -c web_scraper.cpp -o web_scraper.o

main.o: main.o ${HEADERS}
	${COMPILER} -c main.cpp -o main.o

web_scraper: ${OBJECTS}
	${COMPILER} ${OBJECTS} -o web_scraper -I /usr/local/include/Poco -L /usr/local/lib -lPocoNet

clean:
	-rm -f ${OBJECTS}
	-rm -f web_scraper
