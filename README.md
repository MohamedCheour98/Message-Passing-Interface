## Message-Passing-Interface

This project is composed of two different programs where the first one calls the second one multiple times and where the former does a matrix multiplication computation by sharing the work with its copies over shared memory.  

Program 1 is the high performance software which is known to be called an MPI, a Message Passing Interface.

The idea is to be able to call the second program multiple times at the same time, and each instance of the program shares the matrices and works on a specific part of the matrix multiplication, so that the computational time becomes a fraction in comparison with only one instance.
