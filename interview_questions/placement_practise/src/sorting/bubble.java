package sorting;

public class bubble {
    static void print_Arr(int arr[], int n){
        for(int i=0;i<n;i++) {
            System.out.println(arr[i]);
        }
    }
    static void bubble_Sort(int[] arr, int n){
        boolean swapped;
        for( int i=0;i<n-1;i++){
            swapped=false;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }
            }
            if(swapped==false){
                break;
            }
        }
    }
    public static void main(String[] args) {
        int[] arr = { 0, 23, 14, 12, 9 };
        bubble_Sort(arr, 5);
        print_Arr(arr,5);
    }
}
