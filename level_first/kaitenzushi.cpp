#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

int getMaximumEatenDishCount(int N, vector<int> D, int K) {
  // Write your code here
  set<int> st;
  deque<int> dq; 
  int count = 0 ;
  
  for(int i=0;i<D.size();i++){ 
     if(st.find(D[i])==st.end()){
        st.insert(D[i]);
        dq.push_back(D[i]);
        count++;
        if(dq.size()>K){
          int x = dq.front();
          dq.pop_front();
          st.erase(x);
        }
     }
  } 
  
  return count;
}
