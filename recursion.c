#include<stdio.h>

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.

  

  if(n==1) return a;
  if(n==2) return b;
  if(n==3) return c;


  int sum=a+b+c;

  if(n<=4) return sum;

  return find_nth_term(n-1,b,c,sum);


}


int main()
{

     int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
    
}