#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

/* finding of sum and averages using pointer*/

int main()
{
    int array[5], *p, sum =0,  i;
    float average, sum1;
    printf("take any five numbers u want to print\n");

    for(i =0 ;i < 5 ; i++)
    {
    scanf("%d", &array[i] );
    }
    p = &array[0];
    for(i =0 ;i < 5 ; i++){
        sum =  sum +*(p+i);

    }
    printf("the sum is %d\n", sum);
    sum1 = sum;
    average = sum1/5;
    printf("the average is %f\n", average);
}



/* c to print upper case into lower case*/


int main()
{
    char name[100];
    int i, b;
    printf("take your name");
    gets(name);
    b=strlen(name);
    printf("your all name will be in lower case\n");
    for(i=0; i<b; i++){
        if(name[i]>='A' && name[i]<='Z'){
            name[i]= name[i]+32;
        }
        }
        for(i=0; i<b; i++){
     printf("%c", name[i]);
        }

    printf("\n");

    printf("your name in upper case\n");// the character stores in terms of value in memory so if we substract 32 we get the case in upper value
    for(i=0; i<b; i++){
        if(name[i]>='a' && name[i]<='z'){
            name[i]= name[i]-32;
        }
        }
        for(i=0; i<b; i++){
     printf("%c", name[i]);
        }

    return 0;

}



/* toggling of string*/

 int main()
 {
     int i;
     char name[10];
     printf("word please\n");
     gets(name);


     for(i=0; name[i]!='\0'; i++){
        if(name[i]>='A' && name[i]<='Z'){
           name[i] = name[i]+32;
        }
        else
            {name[i]= name[i]-32;}
     }

     for(i=0; name[i]!='\0'; i++){
     printf("%c", name[i]);
     }


 }

/* soring algorith*/

int main()
{
    int name[5]={1, 7, 5, 4, 8}, i, j, temp;
    for(j=0; j<5; j++){
    for(i=0; i<5; i++){
        if(name[i]>name[i+1]){
        temp=name[i+1];
        name[i+1]=name[i];
        name[i]= temp;}
    }
    }
    for(i=0; i<5; i++){
    printf("%d", name[i]);}

}


/* how to insert element in an array*/

int main()
{
   int num, pos, size, i;
   int array[10];// size of an array as size vcant be changed so we have to fix large size
   printf("enter the value for size\n");
   scanf("%d", &size);
   printf("take the %d number for size\n", size);
   for(i=0; i<size; i++){
    scanf("%d", &array[i]);
   }
   printf("enter the number for insert\n");
   scanf("%d", &num);
   printf("enter the position number for insert\n");
   scanf("%d", &pos);

   for(i=size-1; i>=pos; i--){
    array[i+1]=array[i];// the last element shift towards  one position right
    if(i == pos){
       array[pos]=num;// when position equals to value
    }
   }
   size++;// size should be increased in order to print the value
   for(i=0; i<size; i++){
    printf("%d", array[i]);
   }
}



/* calculation of H.C.F*/

int main()
{

    int temp = 1, n1, n2, i;
    printf("take the value n1 and n2\n");// msg for user
    scanf("%d %d", &n1, &n2);// element for given variable
    for(i=2; i<=9; i++){
        if(n1%i==0 && n2%i==0){// both the input number has common factor so and logic is used
            temp = temp * i;// temp shud be multiplied for the to the temp
            n1 = n1/i;// noe the no is divided by n1 and n2
            n2 = n2/i;
            i--;

        }
    }
    printf("H.C.F is %d", temp);
}


  int main()
  {
      int i, pos, temp, size;
      printf("enter the size of an array\n");
      scanf("%d", &size);
      int array[5]={1,2,6,3,4};
      printf("enter the position u want to delete\n");
      scanf("%d", &pos);


       for(i=pos-1; i<size-1; i++){
        temp=array[i+1];// this will store the value of array in temp
        array[i+1]=array[i];// this will shift the value towards right
        array[i]= temp;// this will restore the value of temp in previous array so that swap can takes place
      }



      for(i=0; i<size-1; i++){// this will reduce the size
        printf("%d ", array[i]);// this will print the array of size less than deletion element
      }

      return 0;
}

/* check for prime number*/
// every prime number has two factor so with this logic applied below

int main()
{
    int i, count, num;
    printf("put the number for prime number");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        if(num%i==0){// if i is factor so remainder must be zero
            count++;
        }

    }
    if(count==2){// if we get two factor then the number is prime
        printf("the number %d is prime", num);
    }
    else{
        printf("the number %d is not prime", num);
    }



    return 0;
}



int main()
{
    int n1, n2, temp, i, count=0;// declaration of variable

    printf("take the number between u want to print ");// user input for lower and upper value
    scanf("%d %d", &n1, &n2);

    for(temp=n1+1; temp < n2; temp++){//loop for using the numbers between two numbers
        for(i=1; i<=temp; i++){// loop to check whether the number has two factors or not
            if(temp%i==0){
                count++;
            }

        }
        if(count==2){// count =2 means number has only two factors one is 1 and another number itself
                printf("%d ", temp);// output
            }
        count=0;// count = 0 so that for next cycle it will work
    }
    return 0;

}

/* to check whther the number is a fibonacci series*/

int main()
{
    int n1=0, n2=1, sum, size, i;

    printf("take the number you want to print fibonacci series");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        printf("%d ", n1);
        sum=n1+n2;// it gives the sum of two numbers
        n1=n2;//value of n2 is assign in n1
        n2=sum;// the value of sum is assign to n2

    }
    return 0;
}

/*hcf calculation*/

int main()
{
    int n1, n2, i;

    printf("take n1 and n2\n");
    scanf("%d %d", &n1, &n2);

    for(i=n1; i>=1; i--){
        if(n1%i==0 && n2%i==0)
            break;
    }
    printf("HCF is %d", i);
    return 0;
}


/* check for palindrome number*/

int main()
{
    int new_number=0, original_num, num, remainder;

    printf("take the number you want to check for palindrome");
    scanf("%d", &num);
    original_num = num;


    while(num != 0){
        remainder = num%10;
        new_number = new_number *10 + remainder;
        num = num/10;

    }
    if(original_num == new_number){
        printf("the number is palindrome");
    }
    else
        printf("the number is not palindrome");

    return 0;



}


struct student{
int roll;
char name[20];
int fee;
};
int main(){
struct student fee1;
fee1.roll = 10;
strcpy(fee1.name, "ram");
fee1.fee = 200;
printf("%d %s %d", fee1.roll, fee1.name, fee1.fee);

}


/* finding of L.C.M*/

int main()
{
  int n1, n2, i;

  printf("take the lower value n1 and upper n2\n");
  scanf("%d %d", &n1, &n2);

  for(i=n2; i<=n1*n2; i++){
    if(i%n1==0 && i%n2==0)
        break;

}
printf("The L.C.M is %d", i);
    return 0;
}

/* to find the number of digits in the give number*/

int main()
{

    int num, count=0;
    printf("take the number where you want to count the digit\n");
    scanf("%d", &num);

    while(num != 0){
        count++;
        num = num/10;
    }
    printf("the digit has %d number", count);
}

/* c to find the sumof even number*/

int main()
{
    int sum=0, i, size;

    printf("take the number upto u want to add the even number");
    scanf("%d", &size);

    for(i=1; i<size; i++){
        sum = sum + 2*i;// this will add the number multiple of 2
    }
    printf("the sum is %d for %d even number", sum, size);
}


/* use of power in program*/

 int main()
 {
     int n1=2, n2=4, b;

     b= pow(n1, n2);
     printf("%d", b);
 }


/* conversion of binary into decimal*/

int main()
{
    int num,i=0, sum=0, rem;
    printf("take the binary number");
    scanf("%d", &num);

    while(num!=0){// loop continues till num becomes zero
        rem= num%10;// remainder is either 1 or 0
        sum = sum + rem * pow(2, i);// value with sum and remainder and its power multiplication of 2 stored in sum
        i++;
        num = num/10;
    }
    printf("the decimal number is %d ", sum);

}



/* conversion of decimal number into binary*/

int main()
{
    int decimal_num, i=0,j, binary_num[32];

    printf("enter the decimal number");
    scanf("%d", &decimal_num);

    while(decimal_num > 0){
            binary_num[i]= decimal_num%2;
            i++;
            decimal_num = decimal_num/2;

    }
    for(i=i-1; i>=0; i--){
        printf("%d", binary_num[i]);
    }

    return 0;
}

/* triangular form of number*/

int main()
{

    int i, j, p=1, q=1, size;

    printf("take the size of the triangle for numbers");
    scanf("%d", &size);

    for(i=0; i<size; i++){
        for(j=0; j<p; j++){
            printf("%d ", q);
            q++;
        }
        printf("\n");
        p++;
        q=1;
    }


}


/* printing of pyramid star */

int main()
{
    int row, space, star, rowsize;
    printf("enter the row size");
    scanf("%d", &rowsize);

    for(row=1; row<=rowsize; row++){
        for(space=rowsize-row; space>=1; space--){
            printf(" ");
        }


    for(star=1; star<=(2*row)-1; star++){
        printf("*");
    }
    printf("\n");
}
    }



/* printing of inverted pyramid*/


int main()
{
    int star, space, row, rowsize,p=0;

    printf("take the rowsize");
    scanf("%d", &rowsize);

    for(row=1; row<=rowsize; row++){
        for(space=rowsize-row; space<=rowsize; space++){// frst only a single space is needed and the size is increases according to row
            printf(" ");// print the space
        }

        for(star=1; star<=(2*rowsize)-1- (2*p); star++){// here p will reduce the number in each row
            printf("*");// printing the star

        }


        printf("\n");// line change after printing
        p++;// increases the value of p
    }
}



/* making of national flag using loop*/

int main()
{
    int row, height, i, j;

    printf("enter the height of the flag of even");
    scanf("%d", &height);

    for(j=0; j<2; j++){
    for(row=1; row<=height/2; row++){
        for(i=1; i<=row; i++){
            printf("* ");

        }
        printf("\n");
    }
    }
    for(i=1; i<=height/2; i++){
        printf("*");
        printf("\n");
    }

    return 0;
}


/*  square matrix addition */

int main()
{
    int i, j;
    int A[2][2];
    int B[2][2];
    int sum[2][2];

    printf("take the values for matrix A\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("take the values for matrix B\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
            sum[i][j] = A[i][j]+ B[i][j];
    }


    printf("the resultant matrix form is:\n");
     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
        printf("%d ", sum[i][j]);
        }
        printf("\n");
     }


}


int main()
{
    int num[] = {5, 3, 6, 2, 1}, i, temp, j;

    for(j=0; j<5; j++){
         for(i=0; i<5; i++){
            if(num[i]>num[i+1]){
                temp = num[i];
                num[i] = num[i+1];
                num[i+1]= temp;
            }
         }
    }

    for(i=0; i<5; i++){
        printf("%d  ", num[i]);
    }

}
