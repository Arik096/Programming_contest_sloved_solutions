import java.io.*; import java.util.*; import java.text.*; import java.math.*; import java.util.regex.*;
public class Solution {
static String richieRich(String str, int n, int k){
    // Complete this function


    char[] arr = str.toCharArray();

    int x = 0;
    int i = 0;
    int j = n-1;

    while(j>i){
        int num1 = (int)str.charAt(i) - (int)'0';
        int num2 = (int)str.charAt(j) - (int)'0';

        if(num1 == num2){
            i++;
            j--;
        }
        else if(num1 > num2){
            arr[j] = (char)(num1 + (int)'0');
            x++;
            i++;
            j--;
        }
        else{
            arr[i] = (char)(num2 + (int)'0');
            x++;
            i++;
            j--;
        }
    }

    //System.out.println(x);

    if(x > k)
        return "-1";
    else if(x == k)
        return new String(arr);
    else{
        i = 0;
        j = n-1;
        while(j>i && x<k){
            if(str.charAt(i) == str.charAt(j)){
                if(x<k-1 && str.charAt(i) != '9'){
                    arr[i] = (char)(9+(int)'0');
                    arr[j] = (char)(9+(int)'0');
                    x = x+2;
                    i++;
                    j--;
                }
                else{
                    i++;
                    j--;
                }
            }
            else{
                if(arr[i] != '9'){
                arr[i] = (char)(9+(int)'0');
                arr[j] = (char)(9+(int)'0');
                x++;
                i++;
                j--;
                }else{
                    i++;
                    j--;
                }
            }
        }

        if(x < k){
            if(n%2 != 0){
                arr[n/2] = (char)(9+(int)'0');
            }
        }
        return new String(arr);
    }
}

public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int k = in.nextInt();
    String s = in.next();
    String result = richieRich(s, n, k);
    System.out.println(result);
}
}
