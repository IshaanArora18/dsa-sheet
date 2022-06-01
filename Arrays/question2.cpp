//find min max in array
pair findMinMax(int arr[],int n){
  sort(arr,arr+n);
  return {arr[0],arr[n-1]};
}
