CXX = g++
CXXFLAGS = -std=c++11 -Wall -g -lm

SRCS = Jogo.cpp ../API/Personagem/Personagem.cpp

OBJS = $(SRCS:.cpp=.o)

EXEC = jogo.exe

HEADERS = ../API/Headers/Personagem/Personagem.hpp


$(EXEC): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp $(HEADERS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

run:$(EXEC)
	@./$(EXEC)

clean:
	@rm -f $(OBJS) $(EXEC)
