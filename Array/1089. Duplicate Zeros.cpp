class Solution {
private:
    void shiftRight(vector<int>& arr, int index,int n)
    {
        for (int i = n - 2; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        
    }

public:
    void duplicateZeros(vector<int>& arr) 
    {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                shiftRight(arr, i++,n);
            }
        }
        
        
    }
};