TARGET = $(firstword $(MAKECMDGOALS))
FILE = $(TARGET).cpp
YEAR = 2024
OUT = $(YEAR)_$(TARGET).out

.PHONY: $(TARGET)

$(TARGET):
	g++ -std=c++23 -O2 -Wall -Wextra src/$(YEAR)/$(FILE) -o $(OUT)
%::;
