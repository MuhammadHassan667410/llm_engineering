#include <cstdio>
#include <chrono>

int main() {
    constexpr int ITER = 200000000; // 200 million
    double result = 1.0;

    auto start = std::chrono::high_resolution_clock::now();

    // Process 4 iterations per loop to maximize throughput while preserving exact order
    for (int i = 1; i + 3 <= ITER; i += 4) {
        // i
        int t = (i << 2) - 1;          // 4*i - 1
        result -= 1.0 / static_cast<double>(t);
        t = (i << 2) + 1;              // 4*i + 1
        result += 1.0 / static_cast<double>(t);

        // i+1
        int ip1 = i + 1;
        t = (ip1 << 2) - 1;             // 4*(i+1) - 1
        result -= 1.0 / static_cast<double>(t);
        t = (ip1 << 2) + 1;              // 4*(i+1) + 1
        result += 1.0 / static_cast<double>(t);

        // i+2
        int ip2 = i + 2;
        t = (ip2 << 2) - 1;             // 4*(i+2) - 1
        result -= 1.0 / static_cast<double>(t);
        t = (ip2 << 2) + 1;              // 4*(i+2) + 1
        result += 1.0 / static_cast<double>(t);

        // i+3
        int ip3 = i + 3;
        t = (ip3 << 2) - 1;             // 4*(i+3) - 1
        result -= 1.0 / static_cast<double>(t);
        t = (ip3 << 2) + 1;              // 4*(i+3) + 1
        result += 1.0 / static_cast<double>(t);
    }

    // Since ITER is a multiple of 4, no tail remains.
    double final_result = result * 4.0;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;

    printf("Result: %.12f\n", final_result);
    printf("Execution Time: %.6f seconds\n", diff.count());

    return 0;
}