CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I.
TARGET = main

SRCS = main.cpp \
	clockcalendar/Calendar.cpp \
	clockcalendar/Clock.cpp \
	clockcalendar/ClockCalendar.cpp \
	clockcalendar/PCInterface.cpp \
	clockcalendar/FPGAInterface.cpp \
	clockcalendar/Userinterface.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean