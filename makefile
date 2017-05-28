# This makefile was adapted from the code located in
# the makefile.txt file from the CS 162 class at OSU.
# The file is located here:
# https://oregonstate.instructure.com/courses/1616222/files/65660456/download?wrap=1

CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = -lboost_date_time

OBJS = getPosInt.o queue.o main.o menu.o

SRCS = getPosInt.cpp main.cpp menu.cpp

HEADERS = getPosInt.hpp queue.hpp menu.hpp

#target: dependencies
#	rule to build
#	#

fantasy: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o circleList

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean:
	rm -rf *.o
