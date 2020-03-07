

int main(){



int f(int n,int k)
{
   if(n==k || n==0)
      return 1;
   if(k==1 || k==n-1)
      return n;
   return f(n-1,k-1)+f(n-1,k);
}
f(2,5);
}

