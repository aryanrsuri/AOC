TARGET = $(firstword $(MAKECMDGOALS))
YEAR = 2024
FILE = $(TARGET).cpp
OUT = $(TARGET).out

.PHONY: $(TARGET)

$(TARGET):
	g++ -std=c++23 -O2 -Wall -Wextra src/$(YEAR)/$(FILE) -o $(OUT)
	@./$(OUT) < src/$(YEAR)/input
%:: ;

clean: 
	rm *.out




