This is a simple project built after watching https://www.youtube.com/watch?v=MHBG_R_dhwk, where python was shown to be faster than C++ at reading a long input file. This project does the same thing in both C and C++, and with the time utility you can see how long each version takes.

The C version using gets, because I found it easiest.

Once built (I used CLion, but it would be easy to set it up for make or another IDE), you can try it with these command (using the input file in cmake-build-debug:

time ./3377ReadManyLines C < input
time ./3377ReadManyLines C++ < input

On my Mac (2020 Intel MacBook Pro 13" 4-port, i5/16GB/512GB) the C version took less than 1/6 of the time of the C++ way, which would put it comfortably ahead of the python version shown in the video (which took something like 2/3 of the time of their C++ version, which is pretty much duplicated here).
