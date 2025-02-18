# Off-by-one Error and Memory Access Violation in C++

This repository demonstrates two common C++ errors: 

1. **Off-by-one error:** This occurs when a loop iterates one time too many or too few, leading to out-of-bounds array access.  The example shows this with a `std::vector`. 
2. **Memory access violation:** This occurs when code attempts to access memory it does not have permission to access. Often seen when using pointers that point beyond allocated memory. The example shows this with a raw C-style array and a pointer.

The `bug.cpp` file contains the buggy code. The `bugSolution.cpp` file provides a corrected version with explanations.
