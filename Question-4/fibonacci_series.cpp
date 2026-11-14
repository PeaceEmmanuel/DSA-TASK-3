#include <vector>

void generate_fibonacci(int n, vector<int>& sequence = *(new vector<int>())) {
    if (n <= 0) return;
    if (sequence.empty()) {
        sequence.push_back(0);
    } else if (sequence.size() == 1) {
        sequence.push_back(1);
    } else {
        sequence.push_back(sequence[sequence.size() - 1] + sequence[sequence.size() - 2]);
    }
    generate_fibonacci(n - 1, sequence);
}