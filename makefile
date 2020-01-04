OBJS := $(wildcard *.cpp)
CXX = g++
DEBUG = -g
CXXFLAGS = -Wall $(DEBUG) -std=c++11 -pthread
LDFLAGS = -pthread

App: $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)