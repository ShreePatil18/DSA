package misc_questions;

public class peak_element {
    static int findpeak(int[] arr, int n) {
        int l=0;
        int r=n-1;
        int mid=0;
        while(l<=r) {
            mid=l+(r-l)/2;

            if(arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]) {
                break;
            }

            else if(arr[mid-1]>arr[mid]) {
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return arr[mid];
    }
    public static void main(String[] args) {

        int arr[]= {2,1003,4,68,44,67,9,55};

        System.out.println(findpeak(arr,8 ));

    }
}
