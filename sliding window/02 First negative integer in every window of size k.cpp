vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
 long long i;
  long long j;
  vector<long long>ans;
  list<long long>l;
  while(j<N){
    if(arr[j]<0)
      l.push_back(arr[j]);
    if(j-i+1)<K)
      j++;
    if((j-i+1)==k){
    if(l.size()==0)
      ans.push_back(0);
    else
      ans.push_back(l.front());
    if(arr[i]<0){
      l.pop_front();
      i++;
      j++;
      }}
    return ans;
  
  
  }
