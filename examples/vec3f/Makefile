CXXFLAGS=-I .

main-vec3f: main-vec3f.o vec3f.o
	$(CXX) -o $@ $^

vec3f.o: vec3f.cpp vec3f.hpp

clean:
	rm -f main-vec3f *.o *~
