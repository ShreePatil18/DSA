package misc_questions;

public class romantoint {
    static  int value(char c){
        if(c=='I'){
            return 1;

        } else if (c=='V') {
            return 5;

        } else if (c=='X') {
            return 10;
        } else if (c=='L') {
            return 50;
        } else if (c=='C') {
            return 100;
        } else if (c=='D') {
            return 500;
        } else if (c=='M') {
            return 1000;
        }
        return -1;
    }
   static int romantoint(String s){
       int result=0;
       int n=s.length();

       for(int i=0;i<n-1;i++){
            if(value(s.charAt(i))<value(s.charAt(i+1))){
                result=result-value(s.charAt(i));
            }
            else {
                result=result+value(s.charAt(i));
            }
       }

       return result+value(s.charAt(n-1));
   }
    public static void main(String[] args) {

        String romanStr= "LXVMC";
        System.out.println(romantoint(romanStr));

    }
}
