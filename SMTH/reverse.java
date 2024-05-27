import java.util.Arrays;

public class reverse{
    public static int[] reverseit(int[] arr){
        int[] rev = new int[arr.length];
        for(int i = 0; i<arr.length;i++)
        {
            rev[i] = arr[arr.length-i-1];
        }
        return rev;
    }
    public static void main(String[] args){
        int[] ar = {4,5,6,3,10,1};
        int[] revarray = reverseit(ar);
        System.out.println(Arrays.toString(revarray));
    }
}