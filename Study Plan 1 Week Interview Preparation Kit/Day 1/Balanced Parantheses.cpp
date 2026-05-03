int solve(char* A) {
    int balance = 0;
    int i;

    for ( i = 0; A[i] != '\0'; i++) {
        if (A[i] == '(') {
            balance++;
        } else {
            balance--;
        }

        if (balance < 0) {
            return 0;
        }
    }

    return (balance == 0) ? 1 : 0;
}