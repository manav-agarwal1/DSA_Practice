class Solution {
public:
    int Sum(vector<int> &arr, int threshold){
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] >= threshold){
                sum = sum + threshold;
                continue;
            }
            sum = sum + arr[i];
        }
        return sum;
    }
    int findBestValue(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = target/n;
        int hi = *max_element(arr.begin(),arr.end()), mid;
        if(lo <= *min_element(arr.begin(),arr.end()))
            hi = lo;
        while(lo < hi){
            mid = lo + (hi - lo + 1)/2;
            int sum  = Sum(arr,mid);
            if(sum == target)
                return mid;
            if(sum < target)
                lo = mid;
            else
                hi = mid - 1;
        }
       
        if(abs(Sum(arr,lo) - target) <= abs(Sum(arr,lo+1) - target))
            return lo;
        else return lo+1;
    }
};