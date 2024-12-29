package sorting;

public class selection_sort {
    static void swap( int a , int b){
        int temp=a;
        a=b;
        b=temp;
    }
    static void print_Arr(int arr[], int n){
        for(int i=0;i<n;i++) {
            System.out.println(arr[i]);
        }
    }
    static void selection_sort(int[] arr, int n){
            int min_idx;
            for(int i=0;i<n-1;i++){
                min_idx=i;
                for(int j=i+1;j<n;j++){
                    if(arr[j]<arr[min_idx]){
                        min_idx=j;
                    }

                }

                swap(arr[min_idx],arr[i]);
            }
            print_Arr(arr,n);
    }
    public static void main(String[] args) {
        int[] arr = { 0, 23, 14, 12, 9 };
        selection_sort(arr, 5);


    }
}
