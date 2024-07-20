#include <vector>

int compute_sum(const std::vector<int>& numbers) {
    int sum = 0;
    
    // Iterate through the vector and accumulate the sum
    for (int num : numbers) {
        sum += num;
    }
    
    return sum;
}
