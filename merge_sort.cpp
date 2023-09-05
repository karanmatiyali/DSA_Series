void merge(int arr[], int s, int mid, int e)
{
     int len1=mid-s+1;
     int len2=e-mid;
     
     int *arr1=new int[len1];
     int *arr2=new int[len2];
     
     int k=s;
     for(int i=0;i<len1;i++){
         arr1[i]=arr[k++];
     }
     for(int i=0;i<len2;i++){
         arr2[i]=arr[k];
     }
     
     int i=0,j=0;
     k=s;
     while(i<len1 && j<len2){
         if(arr1[i]<arr2[j]){
             arr[k]=arr1[i];
             i++;
             k++;
         }else{
             arr[k]=arr2[j];
             j++,k++;
         }
     }
     while(i<len1){
         arr[k]=arr1[i];
         i++,k++;
     }
     while(j<len2){
         arr[k]=arr2[j];
         k++;
         j++;
     }
     
}
public:
void mergeSort(int arr[], int s, int e)
{
    if(s>=e) return ;
    
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    
    merge(arr,s,mid,e);
}
