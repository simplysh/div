app := div

CXX := g++
CXXFLAGS := -std=c++11
DEST = /usr/local/bin

all: $(app) install

$(app): 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) div.cpp -o $(app)

install:
	cp $(app) $(DEST)
