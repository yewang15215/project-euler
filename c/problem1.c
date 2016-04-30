#define  LIMIT_MAX  1000

int multiples(int num1, int num2) {
    int ret = 0;
    for (int i=0; i< LIMIT_MAX; i++) {
        if (i % num1 == 0 || i % num2 == 0) {
            ret += i;
        }
    }

    return ret;
}

int main() {
    int num1 = 3, num2 = 5;
    return multiples(num1, num2);
}