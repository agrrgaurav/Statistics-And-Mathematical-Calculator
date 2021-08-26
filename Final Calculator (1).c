#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<windows.h>
float M[5]; //Moments stored in this array//
float M1[5];
float add();
float subtract();
float multiply();
float divide();
int fact(int);
int combin();
int permute();
float natural_log();
float power();
float squareroot();
void Main_Mathematical_Calculator();
void matrix_Calculations();
void matrix_addition();
void matrix_subtraction();


//stats functions
void Statistical_Calculator1();
float mean2(float arr[],int n,float F[]);
void moments2(float arr1[],int n,float arr2[]);
float kurtosis2(float a1[],int n,float a2[]);
float Geo_mean2(float A[],int n,float B[]);
float Harmonic_mean2(float a[],int n,float b[]);
float standardDeviation2(float arr1[],int n,float arr2[]);
float skewness2(float arr1[], int n,float arr2[]);

//without frequency
int fun();
int Statistical_Calculator();
float mean(float arr[] ,int n);
float standardDeviation(float arr[],int n);
float skewness(float arr[], int n);
int mode(int a[], int n);
float median(float a[], int n);
void ssort(float arr[], int n);
void sswap(float* xp, float* yp);
float variance(float a[], int n);
float covariance(float arr1[], float arr2[], int n);
float correlation(float X[], float Y[], int n);
 void  moments(float a[], int n);
 float kurtosis(float a1[],int n);
 float Geo_mean(float A[],int n);
 float Harmonic_mean(float a[],int n);
void Linear_regression();

// Numerical Functions//

#define F(x) ((2*x*x*x) -(2*x) - 5)
#define g(x) (3*x + sin(x) - exp(x) )
#define h(x) (3*x + sin(x) - exp(x) )
#define f0(x) cos(x) - x*exp(x)
#define g0(x) -sin(x)-exp(x)-x*exp(x)
#define I 2
#define f1(x,y,z)  (17-y+2*z)/20
#define f2(x,y,z)  (-18-3*x+z)/20
#define f3(x,y,z)  (25-2*x+3*y)/20
#define   SIZE   10
#define ESP 0.001
#define J(x) (x)*(x)*(x) + (x) + 10
#define a3 1
#define a2 0
#define a1 1
#define a0 10
#define MAXN 100
#define ORDER 4
float f(float x)
{
    return cos(x) - x*exp(x);
}

int NumericalCal();
int Bisection();
float Secant();
float Regula_Falsi();
float Newton();
float Muller();
int Bairstow();
int GaussElimination();
int Jacobi();
int Gauss_Seidel();
int Newton_Forward();
int Lagrange_Interpolation();


void clear();

void clear()
{
    system("CLS");
}

void main()
{
    int Choice;
    while(1)
    {
        printf("\n\n***************************  Hey There Welcome to my Calculator  ***************************\n\n");
    printf("                             ************************************************   \n");
    printf("                             *          Welcome to main menu                *   \n");
    printf("                             ************************************************   \n");
    printf("                             *                                              *     \n");
    printf("                             ************************************************   \n");
    printf("                             *          *                                   *     \n");
    printf("                             *  Press 1 *   For Mathematical Calculations   *   \n");
    printf("                             *          *                                   *     \n");
    printf("                             ************************************************   \n");
    printf("                             *          *                                   *   \n");
    printf("                             *  Press 2 *   For Statistical Calculations    *   \n");
    printf("                             *          *                                   *   \n");
    printf("                             ************************************************   \n");
    printf("                             *          *                                   *   \n");
    printf("                             *  Press 3 *   For Numerical Calculations      *   \n");
    printf("                             *          *                                   *   \n");
    printf("                             ************************************************   \n");
    printf("                             *          *                                   *   \n");
    printf("                             *  Press 4 *   To Exit the Program            *   \n");
    printf("                             *          *                                   *   \n");
    printf("                             ************************************************   \n");

    printf("\n\n*********************************************************************************************\n\n");

        printf("Enter your Choice: \n");
        scanf("%d",&Choice);
        system("cls");
        int op;
        switch(Choice)
        {
        case 1:
            Main_Mathematical_Calculator();
            clear();
           break;
        case 2:
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 1 *   For data with       *  Press 2 *   For Data Without *   \n");
            printf("                             *          *     Frequency         *          *       Frequency    *   \n");
            printf("                             ********************************************************************   \n");
            scanf("%d",&op);
            system("cls");
            if(op==1)
                 Statistical_Calculator1();
            else
                Statistical_Calculator();
            clear();
           break;
        case 3:
            NumericalCal();
            clear();
            break;
        case 4:
            exit(0);                            /*exit is a pre-defined function*/
        default:
            printf("Hey! Please enter a valid Choice");
        }
    }
}

// Mathematical Calculator//
void Main_Mathematical_Calculator()
{
printf("\n------------***********------------- Hello!! Welcome to  Mathematical Calculator------------***********-------------\n\n ");
        while(1)
            {
            int option;
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 1 *   For Addition       *  Press 2 *   For Subtraction   *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 3 *   For Multiplication *  Press 4 *   For Division      *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 5 *   For factorial      *  Press 6 *   For Combination   *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 7 *   For Permutation    *  Press 8 *   For Power         *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 9 *   For Natural log    * Press 10 *   For Square-root   *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             * Press 11 *For Matrix-calculation* Press 12 *   For Main-menu     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             * Press 13 *       For Exit       *          *                     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("\nEnter your  desired Option: \n");
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
        case 1:
           add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
           {
            int N,Result;
            printf("Enter the desired number :\n");
            scanf("%d",&N);
           Result= fact(N);
           printf("Result is : %d\n",Result);
           }
            break;
        case 6:
            combin();
            break;
        case 7:
            permute();
            break;
        case 8:
            power();
            break;
        case 9:
            natural_log();
            break;
        case 10:
            squareroot();
            break;
        case 11:
            Matrix_Calculations();
            break;
        case 12:
            main();
            break;
        case 13:
            exit(0);
            break;
        default :
            printf("Invalid Choice\n");
            break;
            }
            }
}

//statistical function

int Statistical_Calculator()
{
    printf("\n------------***********------------- Hello!! Welcome to  Statistical Calculator------------***********-------------\n\n ");
        while(1)
            {
            int option;
            printf("\n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 1 *   For Mean           *  Press 2 *   For Mode          *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 3 *   For Median         *  Press 4 *   For Variance      *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 5 *For Standard deviation*  Press 6 *   For Moments       *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 7 *   For Skewness       *  Press 8 *   For Kurtosis      *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 9 *   For Covariance     * Press 10 *   For Correlation   *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             * Press 11 *   For Regression     * Press 12 *   For Kurtosis      *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             * Press 13 *   For Geometric Mean * Press 14 * For Harmonic Mean   *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             * Press 15 *   For Main menu      * Press 16 * For Exit            *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("\nEnter your  desired Option: \n");
            scanf("%d",&option);
            system("cls");
                int n;
                float x[100];
                float y[100],f[100];
                float ans;
                int arr[100];
                int ans1;
            switch(option)
            {
            case 1:
             printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			 printf("\nEnter the %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
             ans = mean(x,n);
             printf("The mean of given data is %f\n",ans);
             break;


            case 2:
              printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			  printf("\nEnter the integer observations \n");
			 for(int i=0;i<n;i++)
			 {
				scanf("%d",&arr[i]);
			 }
             ans1 = mode(arr,n);
             printf("The mode of given data is %d",ans1);
             break;


            case 3:
              printf("\nEnter the number of observations user wants to enter:\n");
			  scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
              for(int i=0;i<n;i++)
			  {
				scanf("%f",&x[i]);
              }
              ans = median(x,n);
              printf("The median of given data is %f",ans);
              break;


            case 4:
                printf("\nEnter the number of observations user wants to enter:\n");
			  scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
              for(int i=0;i<n;i++)
			  {
				scanf("%f",&x[i]);
              }
              ans = variance(x,n);
              printf("The variance of given data is %f",ans);
              break;


            case 5:
             printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
             ans = standardDeviation(x,n);
             printf("The standard deviation of given data is %f",ans);
             break;

            case 6:
                 printf("\nEnter the number of observations user wants to enter:\n");
			  scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
			  for(int i=0;i<n;i++)
			  {
				scanf("%f",&x[i]);
              }
        printf("\n Enter the frequencies \n");
			   for(int i=0;i<n;i++)
			  {
				scanf("%f",&f[i]);
              }

              moments(x,n);
              printf("The Moments of given data is %f\n %f\n%f\n%f",M[0],M[1],M[2],M[3]);
              break;

             case 7:
                  {
              printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }

             ans = skewness(x,n);
             printf("The skewness of given data is %f",ans);
             break;
                  }

            case 8:

              printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
             ans = kurtosis(x,n);
             printf("The kurtosis of given data is %f",ans);
             break;

            case 9:

             printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
             printf("\nEnter the first set of %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
			 printf("\nEnter the Second set of %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&y[i]);
			 }
             ans = covariance(x,y,n);
             printf("The covariance of given data is %f",ans);
             break;


            case 10:

             printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
             printf("\nEnter the first set of %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
			 printf("\nEnter the Second set of %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&y[i]);
			 }
             ans = correlation(x,y,n);
             printf("The correlation coefficient of given data is %f",ans);
             break;


            case 11:

              Linear_regression();
              break;

            case 12:
                    printf("\nEnter the number of observations user wants to enter:\n");
			  scanf("%d",&n);
			  printf("\nEnter the observations %d observations\n",n);
			  for(int i=0;i<n;i++)
			  {
				scanf("%f",&x[i]);
              }

          ans = kurtosis(x,n);
         printf("The Kurtosis of given data is %f\n",ans);
         if(ans<3)
         printf("\n The distribution is  Platykurtic.");
         if(ans==3)
         printf("\n The distribution is  Normal/Mesokurtic.");
         if(ans>3)
         printf("\n The distribution is  Leptokurtic.");
         break;
         case 13:
          printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			 printf("\nEnter the %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
             ans = Geo_mean(x,n);
             printf("The Geometric mean of given data is %f\n",ans);
             break;
         case 14:
              printf("\nEnter the number of observations user wants to enter:\n");
			 scanf("%d",&n);
			 printf("\nEnter the %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
             ans = Harmonic_mean(x,n);
             printf("The Harmonic mean of given data is %f\n",ans);
         case 15:
              main();
              break;
         case 16:
              exit(0);
            default :
              printf("Invalid Choice");
              break;
             }
            }
            return 0;
}

void Statistical_Calculator1(){
printf("\n------------***********------------- Hello!! Welcome to  Statistical Calculator------------***********-------------\n\n ");
        while(1)
            {
            int option;
            printf("\n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 1 *   For Mean           *  Press 2 *   For Moments       *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 3 *   For Kurtosis       *  Press 4 *   For Geometric     *   \n");
            printf("                             *          *                      *          *       Mean          *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 5 *For Standard deviation*  Press 6 *   For Harmonic      *   \n");
            printf("                             *          *                      *          *       Mean          *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 7 *   For Skewness       *  Press 8 *   For Main Menu     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *  Press 9 *   For Exit           *          *                     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("\nEnter your  desired Option: \n");
            scanf("%d",&option);
            system("cls");
            printf("\nEnter the number of observations user wants to enter for :\n");
            int n;
             float x[100],f[100],ans;
			 scanf("%d",&n);
			 printf("\nEnter the %d observations\n",n);
			 for(int i=0;i<n;i++)
			 {
				scanf("%f",&x[i]);
			 }
			 printf("\n Enter the frequencies \n");
			  for(int i=0;i<n;i++)
			 {
				scanf("%f",&f[i]);
			 }

            switch(option){
            case 1:
              ans = mean2(x,n,f);
              printf("The mean of given data is %f\n",ans);
              break;
            case 2:
               moments2(x,n,f);
               printf("The variance of given data is %f\n %f\n%f\n%f",M[0],M[1],M[2],M[3]);
                break;
            case 3:
                ans = kurtosis2(x,n,f);
                printf("The Kurtosis of given data is %f\n",ans);
                break;
            case 4:
              ans = Geo_mean2(x,n,f);
              printf("The Geometric mean of given data is %f\n",ans);
             break;
            case 5:
              ans= standardDeviation2(x,n,f);
              printf("The standard deviation of given data is %f\n",ans);
            break;
            case 6:
                 ans = Harmonic_mean2(x,n,f);
                 printf("The Harmonic mean of given data is %f\n",ans);
            break;
            case 7:
                ans = skewness2(x,n,f);
                printf("The moment coefficient of skewness of given data is %f\n",ans);
            break;
            default :
              printf("Invalid Choice");
              break;
             }
            }


}
//mathematical functions

float add()
{
	float x,y,z;
printf("\n Enter First number :\n");
scanf("%f",&x);
printf("Enter Second number :\n");
scanf("%f",&y);
	z=(x+y);
	printf("Result is: %f \n",z);
	return z;
}
float subtract()
{
	float x,y,z;
	printf("\n Enter the first number:\n");
	scanf("%f",&x);
	printf("\n Enter the second number:\n");
	scanf("%f",&y);
	z=x-y;
	printf("subtraction:%f\n",z);
	return z;
}
float multiply()
{
		float x,y,z;
	printf("\n Enter the first number:\n");
	scanf("%f",&x);
	printf("\n Enter the second number:\n");
	scanf("%f",&y);
	z=x*y;
	printf("multiplication:%f\n",z);
	return z;
}
float divide()
{
    float x,y,z;
	printf("\n Enter the first number-\n");
	scanf("%f",&x);
	printf("\n Enter the second number-\n");
	scanf("%f",&y);
	z=x/y;
	printf("division:%f\n",z);
	return z;
}
int fact(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
 int permute()
 {
 	int n,r,i,p;
 	printf("\n Enter the value of n and r: \n");
 	scanf("%d\n%d",&n,&r);
 	if
 		(n>r)
	 {
	 	p=(fact(n)/fact(n-r));
		printf("%dP%d is %d\n",n,r,p);
	 }
	 else
	 {
	 	printf("\n value of n should be greater than r\n");
	 }
 	return p;
 }
 int combin()
 {
 	int n,r,i,c;
   	 	printf("\n Enter the value of n and r-\n");
 	scanf("%d%d",&n,&r);
 	if
 		(n>r)
	 {
		c=fact(n)/fact(r)*fact(n-r);
 		printf("%dC%d is %d\n",n,r,c);
	 }
	 else
	 {
	 	printf("\n value of n should be greater than r\n");
	 }

 	return c;
 }

 float power()
 {
 float b,p,result=0;
 printf("\nEnter the value of base and power: \n");
 scanf("%f%f",&b,&p);
 result=pow(b,p);
 printf("%f^%f is %f\n",b,p,result);
 return (result);
}

float natural_log()
{
float a,result;
printf("\nEnter the number-\n");
scanf("%f",&a);
result=log(a);
printf("The logarithm of the number is %f\n",result);
return (result);
}

float squareroot()
{
float a,result;
printf("\n Enter the number: \n");
scanf("%f",&a);
result=sqrt(a);
printf("\n Square root of the number is %f\n",result);
return result;
}

 void Matrix_Calculations()
{
    int matrix_choice;
            printf("                                         Choose one of the desired matrix operation                 \n");
            printf("                             ********************************************************************   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             *  Press 1 *   Matrix Addition    *  Press 2 *  Matrix Subtraction *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             *  Press 3 * Matrix Multiplication* Press 4  * Matrix Transpose    *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             * Press 5  *For Matrix Inverse    * Press 6  *   For Main-menu     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             * Press 7  *       For Exit       *          *                     *   \n");
            printf("                             *          *                      *          *                     *   \n");
            printf("                             ********************************************************************   \n");

    printf("\n Enter you choice: \n");
    scanf("%d",&matrix_choice);
    system("cls");
    while(matrix_choice>=1 && matrix_choice<=7)
    {
        switch(matrix_choice)
        {
        case 1:
            matrix_addition();
            break;
        case 2:
            matrix_subtraction();
            break;
        case 3:
            matrix_multiplication();
            break;
        case 4:
           matrix_transpose();
            break;
        case 5:
            printf("tomatrix_inverse\n");
            break;
        case 6:
            main();
            break;
        case 7:
            exit(0);
            break;
        default:
            break;
        }
    }
}


void matrix_addition()
{
     int r1,c1,r2,c2, A[100][100],B[100][100],sum[100][100],i,j;
    printf("\n Enter the number of rows of matrix A:\n");
    scanf("%d",&r1);
     printf("\n Enter the number of columns of matrix A:\n");
    scanf("%d",&c1);
    printf("\n Enter the number of rows of matrix B:\n");
    scanf("%d",&r2);
     printf("\n Enter the number of columns of matrix B:\n");
    scanf("%d",&c2);
    if(r1==r2 && c1==c2)
 {
     printf("\n Enter the elements of matrix A \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&A[i][j]);
    printf("\n Enter the elements of matrix B\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&B[i][j]);
        printf("Sum of the matrices is:\n");
    for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
       }
 }else
 printf("Invalid data\n");
}

 void matrix_subtraction()
 {
     int i, j, rows, columns, M1[20][20], M2[20][20];
 	int Subtraction[20][20];
  printf("Order of both the matrices should be same.\n");

 	printf("\n Enter Number of rows and columns  :  \n");
 	scanf("%d %d", &i, &j);

 	printf("\n  Enter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &M1[rows][columns]);
    	}
  	}

 	printf("\n Please Enter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &M2[rows][columns]);
    	}
  	}

 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		Subtraction[rows][columns] = M1[rows][columns] - M2[rows][columns];
   	 	}
  	}

 	printf("\n Final Result after Subtracting Matrix M1 from Matrix M2 = M1 - M2 \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", Subtraction[rows][columns]);
    	}
    	printf("\n");
  	}
 }

void matrix_multiplication()
{
     int r1,c1,r2,c2, A[100][100],B[100][100],mult[100][100],i,j,k;
    printf("\n Enter the number of rows of matrix A:\n");
    scanf("%d",&r1);
     printf("\n Enter the number of columns of matrix A:\n");
    scanf("%d",&c1);
    printf("\n Enter the number of rows of matrix B:\n");
    scanf("%d",&r2);
     printf("\n Enter the number of columns of matrix B:\n");
    scanf("%d",&c2);
    if(c1==r2)
 {
     printf("\n Enter the elements of matrix A \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&A[i][j]);
    printf("\n Enter the elements of matrix B\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&B[i][j]);

    for (i = 0; i <r1; i++)
     {
      for (j = 0; j< c2; j++)
        {
             mult[i][j]=0;
        for (k = 0; k < r2; k++)
         {

          mult[i][j] = mult[i][j]+A[i][k]*B[k][j];
        }
}
    }

    printf(" product of the matrices is: \n ");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
  printf("%d \t", mult[i][j]);
      printf(" \n ");
        }
    }
}
 void matrix_transpose()
 {
     int A[100][100],r,c,i,j,Trans[100][100];
printf("Enter the number of rows of matrix \n");
scanf("%d",&r);
printf("Enter the number of columns of matrix \n");
scanf("%d",&c);
printf("Enter the elements of the matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    scanf("%d",&A[i][j]);
    }
}
    for(i=0;i<r;i++)
    for(j=i;j<c;j++)
        {
            int temp=A[i][j];
            Trans[i][j]=A[j][i];
            Trans[j][i]=temp;
        }
    printf("\n Transpose of the above matrix is :\n ");
    for(i=0;i<r;i++)
        {
    for(j=0;j<c;j++)
    {
        printf("%d \t",Trans[i][j]);
    }
    printf("\n");
}
 }

//Statistical functions

void sswap(float* xp, float* yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void ssort(float arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        sswap(&arr[min_idx], &arr[i]);
    }
}

float mean(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
        float ans=sum/n;
    return ans;
}


float standardDeviation(float arr[],int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum = (arr[i] - mean(arr, n)) *
              (arr[i] - mean(arr, n));

    return sqrt(sum / n);
}


float skewness(float arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum = (arr[i] - mean(arr, n)) *
              (arr[i] - mean(arr, n)) *
              (arr[i] - mean(arr, n));
    float ans= sum / (n * standardDeviation(arr, n) *
                 standardDeviation(arr, n) *
                 standardDeviation(arr, n) *
                 standardDeviation(arr, n));
    return ans;
}

int mode(int a[], int n)
{
    int b[n];
    float max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    int t = max + 1;
    int count[t];
    for (int i = 0; i < t; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[a[i]]++;

    int mode = 0;
    int k = count[0];
    for (int i = 1; i < t; i++) {
        if (count[i] > k) {
            k = count[i];
            mode = i;
        }
    }
    return mode;
}

float median(float a[], int n)
{
    ssort(a,n);
    if (n % 2 != 0)
        return (float)a[n / 2];

    return (float)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}

float variance(float a[], int n)
{
    // Compute mean (average of elements)
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    float mean = (float)sum /
                  (float)n;

    float sqDiff = 0;
    for (int i = 0; i < n; i++)
        sqDiff += (a[i] - mean) *
                  (a[i] - mean);
    return sqDiff / n;
}

float covariance(float arr1[], float arr2[], int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum = sum + (arr1[i] - mean(arr1, n)) *
                    (arr2[i] - mean(arr2, n));
    return sum / (n - 1);
}

float correlation(float X[], float Y[], int n)
{

    float sum_X = 0, sum_Y = 0, sum_XY = 0;
    float squareSum_X = 0, squareSum_Y = 0;

    for (int i = 0; i < n; i++)
    {
        sum_X = sum_X + X[i];

        sum_Y = sum_Y + Y[i];

        sum_XY = sum_XY + X[i] * Y[i];

        squareSum_X = squareSum_X + X[i] * X[i];
        squareSum_Y = squareSum_Y + Y[i] * Y[i];
    }

    float corr = (float)(n * sum_XY - sum_X * sum_Y)
                  / sqrt((n * squareSum_X - sum_X * sum_X)
                      * (n * squareSum_Y - sum_Y * sum_Y));

    return corr;
}

void Linear_regression()
{
 int n, i;
 float x[100], y[100], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 printf("Enter the number of data points?\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i=1;i<=n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }

 for(i=1;i<=n;i++)
 {

  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 /* Calculating a and b */
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f\n",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx\n\n",a,b);

}


/*Numerical Calculator*/
int NumericalCal()
{
printf("\n------------***********------------- Hello!! Welcome to  Numerical Calculator------------***********-------------\n\n ");
        while(1)
            {
            int option;
            printf("                *********************************************************************************************   \n");
            printf("                *  Press 1 *   For Bisection Method               *  Press 2 *   For Secant Method          *   \n");
            printf("                *          *                                      *          *                              *   \n");
            printf("                *********************************************************************************************   \n");
            printf("                *  Press 3 *   For Regula Falsi Method            *  Press 4 *   For Newton Raphson         *   \n");
            printf("                *          *                                      *          *                              *   \n");
            printf("                *********************************************************************************************   \n");
            printf("                *  Press 5 *   For Muller Method                  *  Press 6 *   For Bairstow Method        *   \n");
            printf("                *          *                                      *          *                              *   \n");
            printf("                *********************************************************************************************   \n");
            printf("                *  Press 7 *   For Gauss Elimination Method       *  Press 8 *   For Jacobi Method          *   \n");
            printf("                *          *                                      *          *                              *   \n");
            printf("                *********************************************************************************************   \n");
            printf("                *  Press 9 *   For Gauss Seidel Method            *  Press 10*   For Newton Forward Interpol*   \n");
            printf("                *          *                                      *          *                                  \n");
            printf("                *********************************************************************************************   \n");
            printf("                * Press 11 *   For Lagrange Interpolation Method  * Press 12 *   For Main-menu              *   \n");
            printf("                *          *                                      *          *                              *   \n");
            printf("                *********************************************************************************************   \n");
            printf("                * Press 13 *       For Exit                                                                 *   \n");
            printf("                *          *                                                                                *   \n");
            printf("                *********************************************************************************************   \n");
            printf("\nEnter your  desired Option: \n");
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
        case 1:
           {
            Bisection();
            break;
        case 2:
            Secant();
            break;
        case 3:
            Regula_Falsi();
            break;
        case 4:
            Newton();
            break;
        case 5:
            Muller();
            break;
        case 6:
            Bairstow();
            break;
        case 7:
            GaussElimination();
            break;
        case 8:
            Jacobi();
            break;
        case 9:
            Gauss_Seidel();
            break;
        case 10:
            Newton_Forward();
            break;
        case 11:
            Lagrange_Interpolation();
            break;
        case 12:
            main();
            break;
        case 13:
            exit(0);
            break;
        default :
            printf("Invalid Choice");
            break;
            }
            break;
            }
            }
}

int Bisection()


{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1;

	 /* Inputs */
	 up:
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 /* Calculating Functional Value */
	 f0 = f(x0);
	 f1 = f(x1);
	 /* Checking whether given guesses brackets the root or not. */
	 if( f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
   /* Implementing Bisection Method */
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  x2 = (x0 + x1)/2;
		  f2 = f(x2);

		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);

		  if( f0 * f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", x2);

}

   float Secant()
   /* find the real roots of non linear equation using secant method */
 {
 float x0,x1,x2,f0,f1,f2,e;
 int step=1,N;

 printf("\n Enter initial guesses:\n");
 scanf("%f%f",&x0,&x1);
 printf(" Enter tolerable error :\n");
 scanf("%f",&e);
 printf(" Enter maximum iteration:\n");
 scanf("%d",&N);
 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
 do
     {
       f0=g(x0);
       f1=g(x1);
       if(f0==f1)
       {
	    printf("Mathematical Error.");
	    exit(0);
       }
       x2=x1-(x1-x0)*f1/(f1-f0);
       f2=g(x2);

       printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);
	x0=x1;
	f0=f1;
	x1=x2;
	f1=f2;

	step=step+1;
	if(step>N)
	{
	   printf("Not convergent. ");
	   exit(0);
	}
    }while(fabs(f2)>e);

     printf("\nRootis :%f", x2);
 }

 /* find the real roots of non linear equation using regula falsi method */

 float Regula_Falsi()
 {
    float x0,x1,x2,f0,f1,f2,e;
    int step=1,N;



    printf("\n Enter initial guesses:\n");
    scanf("%f%f",&x0,&x1);
    printf(" Enter tolerable error :\n");
    scanf("%f",&e);
    printf(" Enter maximum iteration:\n");
    scanf("%d",&N);
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");

    do
    {
       f0=h(x0);
       f1=h(x1);
       if(f0==f1)
       {
	    printf("Mathematical Error.");
	    exit(0);
       }
       x2=x0-(x0-x1)*f0/(f0-f1);
       f2=h(x2);

       printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,f2);

       if(f0*f2<0)
       {
	  x1=x2;
	  f1=f2;
       }
       else
       {
	  x0=x2;
	  f0=f2;
       }

	step=step+1;
	if(step>N)
	{
	   printf("Not convergent. ");
	   exit(0);
	}
    }while(fabs(f2)>e);

     printf("\nRootis :%f", x2);
 }

float Newton()
{
float x0,x1,f0,f1,g0,e;
 int step=1,N;
  printf("\n Enter initial guess:\n");
  scanf("%f",&x0);
  printf("Enter tolerable error:\n");
  scanf("%f",&e);
  printf("Enter maximum iterations:\n");
  scanf("%d",&N);
   printf("\n Step\t\tx0\t\tf0(x0)\t\tx1\t\tf0(x1)\n");
   do
   {
      g0 = g0(x0);
      f0 = f0(x0);
      if(g0==0.0)
      {
	 printf("Mathematical error.");
	 exit(0);
      }

      x1=x0 - f0/g0;

      printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
      x0 = x1;
      step =step + 1;
      if(step > N)
      {
	printf("Not convergent.");
	exit(0);
      }

      f1=f0(x1);
  }while(fabs(f1)>e);

  printf("\nRoot is: %f",x1);
}

float Muller()
{
    int i, itr, maxmitr;
    float x[4], li, di, mu, s, l, allerr ;
    printf("\nEnter the three initial guesses:\n");
    for (i=i-2; i<3; i++)
        scanf("%f", &x[i]);
    printf("Enter allowed error and maximum iterations:\n");
    scanf("%f %d", &allerr, &maxmitr);
    for (itr=1; itr<=maxmitr; itr++)
    {
        li = (x[I] - x[I-1]) / (x[I-1] - x[I-2]);
        di = (x[I] - x[I-2]) / (x[I-1] - x[I-2]);
        mu = f(x[I-2])*li*li - f(x[I-1])*di*di + f(x[I])*(di+li);
        s = sqrt ((mu*mu - 4*f(x[I])*di*li*(f(x[I-2])*li - f(x[I-1])*di + f(x[I]))));
        if (mu < 0)
            l = (2*f(x[I])*di)/(-mu+s);
        else
            l = (2*f(x[I])*di)/(-mu-s);
        x[I+1] = x[I] + l*(x[I] - x[I-1]);
        printf("At iteration no. %3d, x = %7.5f\n", itr, x[I+1]);
        if (fabs (x[I+1] - x[I]) < allerr)
        {
        printf("After %3d iterations, the required root is %6.4f\n", itr, x[I+1]);
        return 0;
        }
        for (i=I-2; i<3; i++)
            x[i] = x[i+1];
    }
printf("The required solution does not converge or iterations are insufficient\n");

}


/* Main function */
int Jacobi()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;

 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 return 0;
}

int Gauss_Seidel()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int count=1;

 printf("Enter tolerable error:\n");
 scanf("%f", &e);

 printf("\nCount\tx\ty\tz\n");
 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x1,y0,z0);
  z1 = f3(x1,y1,z0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count, x1,y1,z1);

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  count++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;

 }while(e1>e && e2>e && e3>e);

 printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);

 return 0;
}


int GaussElimination()
{
	 float a[SIZE][SIZE], x[SIZE], ratio;
	 int i,j,k,n;



	 /* Inputs */
	 /* 1. Reading number of unknowns */
	 printf("Enter number of unknowns: ");
	 scanf("%d", &n);
	 /* 2. Reading Augmented Matrix */
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   printf("a[%d][%d] = ",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }
	/* Applying Gauss Elimination */
	 for(i=1;i<=n-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = a[j][i]/a[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }
	 /* Obtaining Solution by Back Subsitution */
	 x[n] = a[n][n+1]/a[n][n];

	 for(i=n-1;i>=1;i--)
	 {
		  x[i] = a[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - a[i][j]*x[j];
		  }
		  x[i] = x[i]/a[i][i];
	 }
	 /* Displaying Solution */
	 printf("\nSolution:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("x[%d] = %0.3f\n",i, x[i]);
	 }
	 return(0);
}


int Bairstow()
{
  double u,v,u1,v1,u2,v2,b3,b2,p,b1,b0,c2,c1,c0,U,V;
  int i=1;
  float c3=0;
  printf("\nEnter the value of u: ");
  scanf("%lf",&u);
  printf("\nEnter the value of v: ");
  scanf("%lf",&v);
  b3=a3;
  b2=a2+u*b3;
  b1=a1+u*b2+v*b3;
  b0=a0+u*b1+v*b2;
  c2=b3;
  c1=b2+u*c2+v*c3;
  c0=b1+u*c1+v*c2;
  p=c1*c1-c0*c2;
  U=((-(b1*c1-b0*c2))/(p));
  V=((-(b0*c1-c0*b1))/(p));
  u1=u+U;
  v1=v+V;
  printf("\n\n b0 = %lf",b0);
  printf("\n\n b1 = %lf",b1);
  printf("\n\n b2 = %lf",b2);
  printf("\n\n b3 = %lf",b3);
  printf("\n\n c0 = %lf",c0);
  printf("\n\n c1 = %lf",c1);
  printf("\n\n c2 = %lf",c2);
  printf("\n\n c3 = %lf",c3);
  printf("\n\n * * * u = %lf * * *",u1);
  printf("\n\n * * * v = %lf * * *",v1);

  do
  {
   u=u1;
   v=v1;
   b3=a3;
   b2=a2+u*b3;
   b1=a1+u*b2+v*b3;
   b0=a0+u*b1+v*b2;
   c2=b3;
   c1=b2+u*c2+v*c3;
   c0=b1+u*c1+v*c2;
   p=c1*c1-c0*c2;
   U=((-(b1*c1-b0*c2))/(p));
   V=((-(b0*c1-c0*b1))/(p));
   u2=u+U;
   v2=v+V;
   printf("\n\n b0 = %lf",b0);
   printf("\n\n b1 = %lf",b1);
   printf("\n\n b2 = %lf",b2);
   printf("\n\n b3 = %lf",b3);
   printf("\n\n c0 = %lf",c0);
   printf("\n\n c1 = %lf",c1);
   printf("\n\n c2 = %lf",c2);
   printf("\n\n c3 = %lf",c3);
   printf("\n\n  u = %lf ",u2);
   printf("\n\n  v = %lf ",v2);

   if(fabs(u1 - u2) < ESP && fabs(v1-v2) < ESP)
   {
    printf("\n\nREAL ROOT = %.3lf",u2);
    printf("\n\nREAL ROOT = %.3lf",v2);
    i=0;
   }
   else
   {
     u1 = u2;
     v1 = v2;
   }
  }while(i!=0);
}


int Lagrange_Interpolation()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\n\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\n The table you entered is as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%0.3f\t%0.3f",x[i],y[i]);
        printf("\n");
    }
    while(d==1)
    {
        printf(" \n\n\n Enter the value of the x to find the respective value of y\n\n\n");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\n The respective value of the variable y is: %f",k);
        printf("\n\n Do you want to continue?\n\n Press 1 to continue and any other key to exit");
        scanf("%d",&d);
    }
}

int Newton_Forward()
{
    float ax[MAXN+1], ay [MAXN+1], diff[MAXN+1][ORDER+1], nr=1.0, dr=1.0,x,p,h,yp;
    int n,i,j,k;
    printf("\nEnter the value of n:\n");
    scanf("%d",&n);

    printf("\nEnter the values in form x,y:\n");
    for (i=0;i<=n;i++)
        scanf("%f %f",&ax[i],&ay[i]);
    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f",&x);
    h=ax[1]-ax[0];

    //now making the difference table
    //calculating the 1st order of differences
    for (i=0;i<=n-1;i++)
        diff[i][1] = ay[i+1]-ay[i];

    //now calculating the second and higher order differences
    for (j=2;j<=ORDER;j++)
        for(i=0;i<=n-j;i++)
        diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    //now finding x0
    i=0;
    while (!(ax[i]>x))
        i++;

    //now ax[i] is x0 and ay[i] is y0
    i--;
    p = (x-ax[i])/h;
    yp = ay[i];

    //now carrying out interpolation
    for (k=1;k<=ORDER;k++)
    {
        nr *=p-k+1;
        dr *=k;
        yp +=(nr/dr)*diff[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n",x,yp);
}

float mean2(float arr[], int n,float F[])
{
    float sum = 0,N=0;
    for (int i = 0; i < n; i++)
N += F[i];
    for (int i = 0; i < n; i++)
        sum += (arr[i]*F[i]);
        float ans=sum/N;
    return ans;
}

void moments2(float a[], int n, float b[])
{
    int i;
float s1=0,s2=0,s3=0,s4=0,N=0;
for (int i = 0; i < n; i++)
N += b[i];
   for (int i = 0; i < n; i++)
s1 += (b[i]*(a[i] - mean2(a,n,b)));
        M[0]=s1 /N;
    for (int i = 0; i < n; i++)
    s2+= (b[i]*(pow(a[i] - mean2(a,n,b),2)));

    M[1]=s2/N;
    for (int i = 0; i < n; i++)
    s3+= (b[i]*(pow((a[i] - mean2(a,n,b)),3)));
    M[2]=s3/N;
    for (int i = 0; i < n; i++)
    s4+= (b[i]*(pow((a[i] - mean2(a,n,b)),4)));
     M[3]=s4/N;
     }
float kurtosis2(float a[],int n,float atwo[])
{
    float ans1;
    mean2(a,n,atwo);
    moments2(a,n,atwo);
    ans1=(M[3])/(M[1]*M[1]);
    return ans1;
}
float Geo_mean2(float A[],int n,float B[])
{

    float N=0;
    for(int i=0;i<n;i++)
    {
        N+=B[i];
    }
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum = sum + B[i]*log(A[i]);

    sum = sum / N;

    return exp(sum);
}

float Harmonic_mean2(float a[],int n,float b[])
{
    int N=0,i;
    float sum=0,HM;
    N+= b[i];
     for(int i=0;i<n;i++)
            {
            sum += (b[i]/a[i]);
            }
         HM = N/sum;
          return HM;
}
float standardDeviation2(float arr1[],int n,float arr2[])
{
    float sum = 0;
int i,N=0;
N+=arr2[i];
    for (int i = 0; i < n; i++)
        sum = (arr1[i]*arr2[i] - mean2(arr1, n,arr2)) *
              (arr1[i]*arr2[i] - mean2(arr1, n,arr2));

    return sqrt(sum /N);
}

float skewness2(float arr1[], int n,float arr2[])
{
    float Sk;
  mean2(arr1,n,arr2);
  moments2(arr1,n,arr2);
  Sk=M[2]/(pow(M[1],1.5));
    return Sk;
}

void moments(float a[], int n)
{
    int i;
float S1=0,S2=0,S3=0,S4=0;
for (int i = 0; i < n; i++)
   for (int i = 0; i < n; i++)
S1 += ((a[i] - mean(a,n)));
        M1[0]=S1/n;
    for (int i = 0; i < n; i++)
    S2+= ((pow(a[i] - mean(a,n),2)));

    M1[1]=S2/n;
    for (int i = 0; i < n; i++)
    S3+= ((pow((a[i] - mean(a,n)),3)));
    M1[2]=S3/n;
    for (int i = 0; i < n; i++)
    S4+= ((pow((a[i] - mean(a,n)),4)));
     M1[3]=S4/n;
     }
float kurtosis(float a[],int n)
{
   float ans1;
    mean(a1,n);
    moments(a1,n);
    ans1=(M1[3])/(M1[1]*M1[1]);
    return ans1;
}

float Geo_mean(float A[],int n)
{
    float  GM=1,result;
    int i;
            for(i=0;i<n;i++)
            {
            GM *= A[i];     // we will store the product of all numbers in GM variable
            }
        result = pow(GM,(float)1/n);
        return result;
}

float Harmonic_mean(float a[],int n)
{
    float sum=0,HM;
     for(int i=0;i<n;i++)
            {
            sum += (1/a[i]);
            }
         HM = n/sum;
          return HM;
}

