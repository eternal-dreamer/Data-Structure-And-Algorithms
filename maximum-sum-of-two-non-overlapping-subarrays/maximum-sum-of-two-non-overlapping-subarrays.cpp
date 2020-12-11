class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        
        for(int i = 1;i<A.size();i++)
            A[i] += A[i-1];
        int lmax = A[L-1];
        int mmax = A[M-1];
        int res = A[L+M-1];
        for(int i = L+M;i<A.size();i++)
        {
            lmax = max(lmax,A[i-M] - A[i-L-M]);
            mmax = max(mmax,A[i-L] - A[i-L-M]);
            res = max(res, max(lmax + A[i] - A[i-M], mmax + A[i] -A[i-L]));
        }
       return res; 
    }
};
