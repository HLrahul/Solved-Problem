class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        int leftMin[n];
        int rightMax[n];

        leftMin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(arr[i], leftMin[i - 1]);
        }

        rightMax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(arr[i], rightMax[i + 1]);
        }

        int maxDiff = -1;
        int i = 0, j = 0;
        while (i < n && j < n) {
            if (leftMin[i] <= rightMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }

        return maxDiff;
    }

};