#include <iostream>
#include "addition.cu"

int main() {
    const int arraySize = 1000;
    int h_a[arraySize], h_b[arraySize], h_c[arraySize];

    // Initialize arrays
    for (int i = 0; i < arraySize; ++i) {
        h_a[i] = i;
        h_b[i] = i * 2;
    }

    // Perform addition using CUDA
    addArrays(h_a, h_b, h_c, arraySize);

    // Print results
    for (int i = 0; i < 10; ++i) {  // Print first 10 results
        std::cout << h_a[i] << " + " << h_b[i] << " = " << h_c[i] << std::endl;
    }

    return 0;
}
