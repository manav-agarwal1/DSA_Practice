// find in mountain array
class Solution {
public:
    int binarySearch(int lo, int hi, int target, MountainArray &mountainArr){
        if(lo == 0){
            while(lo < hi){
                int mid = lo + (hi - lo)/2;
                if(mountainArr.get(mid) == target)
                    return mid;
                if(mountainArr.get(mid) < target)
                    lo = mid+1;
                else
                    hi = mid;
            }
            if(mountainArr.get(lo) == target)
                return lo;
        }
        else{
            while(lo<hi){
                int mid = lo + (hi - lo)/2;
                if(mountainArr.get(mid) == target)
                    return mid;
                if(mountainArr.get(mid) > target)
                    lo = mid+1;
                else
                    hi = mid;
            }
                if(mountainArr.get(lo) == target)
                    return lo;
            }
        return -1;
    }
    
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length(),lo = 0, hi = n-1, mid;
        // getting index of the peak
        while(lo < hi){
            mid = lo + (hi - lo)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                lo = mid + 1;
            else
                hi = mid;
        }
        // index of peak recieved
        int pos_left = binarySearch(0, lo, target, mountainArr);
        if (pos_left == -1)
            return binarySearch(lo+1, n-1, target, mountainArr);
        return pos_left;
    }
};