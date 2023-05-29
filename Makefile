CXXFLAGS = -std=c++11 -Wall -Wpedantic

SRC = main
EXE = mg_intomm
default-target: $(EXE)

$(EXE): $(SRC).cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

install: $(EXE)
	cp $(EXE) ~/.local/bin
