int maxSubArray(const int* A, int n1) {
    
    int sum = 0;
    int ans = A[0];
    int i;

    for(i = 0;i < n1; i++) {

        sum += A[i];         
        if(sum > ans) {
            ans = sum;
        }

        if(sum < 0) {
            sum = 0;         
        }
    }

    return ans;
}