CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I.
TARGET = main

SRCS = main.cpp \
	clockcalendar/Calendar.cpp \
	clockcalendar/Clock.cpp \
	clockcalendar/ClockCalendar.cpp \
	clockcalendar/Userinterface.cpp \
	clockcalendar/FPGAInterface.cpp \
	clockcalendar/OLED.cpp \
	clockcalendar/gptimer.c \
    clockcalendar/irqmp.c \

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean