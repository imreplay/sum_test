#include "sum.h"

int sum(int n){
  int res = 0;
  for(int i=1;i<n+1;i++){
    res += i;
  }
  return res;
}
