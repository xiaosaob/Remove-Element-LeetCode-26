// Given an array and a value, remove all instances of that value in place and return the new length.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n == 0) return 0;
        int readIdx = 0, writeIdx = 0;
        while(readIdx < n) {
            if(A[readIdx] != elem) {
                A[writeIdx++] = A[readIdx];
            }
            ++readIdx;
        }
        return writeIdx;
    }
};
