import java.util.Arrays;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length;
        int n=nums2.length;
        int size=m+n;
        double n1;
        int [] ans=new int[size];
        System.arraycopy(nums1,0,ans,0,m);
        System.arraycopy(nums2,0,ans,m,n);

        Arrays.sort(ans);
        if(size%2!=0)
        {
          n1=(double)ans[size/2];  
        }
        else
        {
          n1=((double)ans[(size/2)-1]+(double)ans[size/2])/2;
        }

        return n1;

    }
}
