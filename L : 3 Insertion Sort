class Solution
{
    public:
    void insert(int *arr, int i)
    {
        int cmp=arr[i];
        i--;
        while(i>=0 && arr[i]>cmp)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=cmp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int x=1;x<n;x++)
        {
            
            insert(arr,x);
        }
    }
};
