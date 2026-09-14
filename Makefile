CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = clkcal
SOURCES = main.cpp \
          clockcalendar/Clock.cpp \
          clockcalendar/Calendar.cpp \
          clockcalendar/ClockCalendar.cpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
