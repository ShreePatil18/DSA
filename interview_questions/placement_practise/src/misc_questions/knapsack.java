package misc_questions;

public class knapsack {
    static int max(int a, int b){
        if(a>b){
            return a;
        }
        return b;
    }
    static int profit(int[] weights, int[] profit, int n, int W){
        int res=0;
        for(int i=0;i<n;i++){
            if(weights[i]<=W){
                res=max(profit[i],res);
            }
        }
        return res;
    }

    public static void main(String[] args) {
        int n=3;
        int W=4;
        int[] weight={4,5,1};
        int[] profit={1,2,3};

        System.out.println(profit(weight,profit,n,W));
    }
}
