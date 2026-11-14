int sum_natural(int n) {
    if (n <= 1) return n;
    return n + sum_natural(n - 1);
}