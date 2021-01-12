#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int lo, int hi,int target) {
        while(lo < hi) {
            int mid = lo + (hi - lo)/2;
            if(nums[mid] == target)
                return mid;
            else
                if(nums[mid] < target)
                    lo = mid + 1;
                else
                    hi = mid;
        }
        if(nums[lo] != target)
            return -1;
        else return lo;
    }
    int search(vector<int>& nums, int target) {
        // we can divide the search space in 2 halfs perform a binary search in each half
        // improvising I want that if the array is multiple of n times rotated then i start with search of whole array otherwise do crazy stuff said above
        int lo = 0, hi = nums.size() - 1, mid;
        int pivot = 0;
        while(lo < hi){
            int mid = lo + (hi - lo)/2;
            if(mid>lo && nums[mid - 1]>nums[mid]){
                pivot = mid - 1;
                break;
            }
            if(mid<hi && nums[mid + 1]<nums[mid]){
                pivot = mid;
                break;
            }
            if(nums[lo] > nums[mid]) hi = mid - 1;
            else lo = mid + 1;
        }
        int first_half = binarySearch(nums, 0, pivot, target);
        if(first_half == -1 && int(nums.size())!=1) // without this nums size thingy it wont work with case of vector size 1, do a dry run to test
            return binarySearch(nums, pivot+1, int(nums.size() - 1), target);
        else return first_half; 
    }
};