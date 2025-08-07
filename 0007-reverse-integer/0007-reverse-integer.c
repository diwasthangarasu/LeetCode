long ch(int x) {
    long rev = 0;
    while (x != 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int reverse(int x) {
    long result = ch(x);
    if (result > INT_MAX || result < INT_MIN) {
        return 0;
    }
    return (int)result;
}
