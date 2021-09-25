class solution{
  public:
  int maximumsubarray(int k,int vector<int>&arr,intn){
    int i=0;
    int j=0;
    int sum=0;
    int mx=INT_MIN;
    while(j<n){
      sum= sum+arr[j];
      if(j-i+1<k)
        j++;
      elseif((j-i+1)==k){
      mx=max(sum,mx);
      sum=sum-arr[i];
      i++;
      j++;
      }}
    return mx;
        
        
    
    
  }
}
