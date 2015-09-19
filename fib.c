#include <stdio.h>
#include <stdlib.h>

int Fib(int k) {
   if (k<=2) return 1;
   else return Fib(k-1)+Fib(k-2); /* sorry - I know iterative more efficient but takes longer to write */
}

int main() {
  int N=1;
  printf("What is N?");
  scanf("%d",&N);

  printf("Fib(%d)=%d\n",N,Fib(N));
}
