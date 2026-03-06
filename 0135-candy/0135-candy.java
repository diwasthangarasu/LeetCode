class Solution {
    public int candy(int[] ratings) {
        int arr[]=new int[ratings.length];
        Arrays.fill(arr, 1);
        for(int i=1;i<ratings.length;i++){
            if(ratings[i-1]<ratings[i]){
                arr[i]=arr[i-1]+1;
            }
            else{
                int a=i;
                while(a > 0 && ratings[a-1] > ratings[a] && arr[a-1] <= arr[a]){
                    arr[a-1]=arr[a]+1;
                    a--;
                }
            }
        }
        int sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
        }
        return sum;
    }
}