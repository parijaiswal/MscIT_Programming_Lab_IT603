CXX = g++
CXXFLAGS = -Wall -std=c++11

OBJS = Student.o main.o
TARGET = student_program

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

Student.o: Student.cpp Student.h
	$(CXX) $(CXXFLAGS) -c Student.cpp -o Student.o

main.o: main.cpp Student.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f $(OBJS) $(TARGET)
