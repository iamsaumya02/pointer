  #include<stdio.h>
  #include<math.h>
  
  void func(int a, int b, int c, int d, int e, float* sum, float* avg, float* std_dev);
   void main()
{
	int a,b,c,d,e;
	float sum, avg, std_dev;
		printf("Enter five numbers in order:");
	scanf("%d \n %d \n %d \n%d \n %d",&a,&b,&c,&d,&e);
        func(a,b,c,d,e,&sum,&avg,&std_dev);
		printf("Sum: %f \n",sum);
	        printf("Average: %f \n", avg);
		printf("Standard deviation: %f",std_dev);

}
   void func(int a, int b, int c,int d, int e, float* sum, float* avg, float* std_dev);
{
	*sum= a+b+c+d+e/5.0;
	*avg= *sum/5.0;
	*std_dev= sqrt(((a-*avg)*(a-*avg)+(b-*avg)*(b-*avg)+(c-*avg)*(c-*avg)+(d-*avg)*(d-*avg)+(e-*avg)*(e-*avg))/5.0);
}
