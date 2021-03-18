  #include<stdio.h>
  func(int a, int b, int c, float *avg, float *per);
  void main()
  {
	  int a,b,c;
	  float avg, per;
	  printf("enter marks in all three subjects:");
	  scanf("%d%d%d",&a,&b,&c);
	  func(a,b,c,&avg,&per);
		  printf("Average= %.2f",avg);
		  printf("Percenatge= %.2f%%",per);
  }
      func(int a, int b, int c, float *avg, float *per);
  {
	  *avg= a+b+c/3.0;
	  *per= ((a+b+c)/300.0)*100;
  }
