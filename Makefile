# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -std=c++17 -Wall
# Qt Library flags
QTFLAGS := $(shell pkg-config --cflags --libs Qt5Widgets)

# Source files
SOURCES := CodeSnippet.cpp SnippetController.cpp SnippetView.cpp main.cpp

# Object files
OBJECTS := $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE := CodeSnippetManager

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(QTFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

.PHONY: all clean
