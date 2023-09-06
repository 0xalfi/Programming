public class bub {

    static void Bubshort(int []arr, int len) {
        int store,i,j;
        for(i=0;i<len-1;i++){
            System.out.println("Step " + (i+1));
            for(j=0;j<len-i-1;j++){
                System.out.print("Compare: " + arr[j] + " & " + arr[j+1] + " = ");
                if(arr[j] > arr[j+1]) {
                    store = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = store;
                    System.out.println(" --> Swapped");
                } else {
                    System.out.println("--> No swapped");
                }
            }
        }
    }

    static void Result(int []arr, int len) {
        int i;
        for(i=0;i<len;i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int []arr = {5,3,4,2,1};
        int len = arr.length;
        // System.out.println(len);

        Bubshort(arr, len);
        Result(arr, len);
    }
}
