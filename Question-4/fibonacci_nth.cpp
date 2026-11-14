int fibonacci_nth(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci_nth(n - 1) + fibonacci_nth(n - 2);
}