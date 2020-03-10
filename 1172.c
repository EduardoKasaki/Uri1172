 #include <stdio.h>
 
int main(){
   int x[10];
   int i, n, y, y1;
   y;
   n=10;
   for(i = 0; i < n; i++) {
      scanf("%d", &x[i]);  
	  }
	for(i = 0; i < n; i++)
	
	{if 
	
	(x[i]<=0)
	x[i]=1;
	
	}
	
	
	for(i = 0; i < n; i++){
		 
	
	  printf("X[%d] = %d\n", i, x[i]);
}
   return 0;
}
