#include <stdio.h>

// long int fact(int a){

// int fact=1;
// for(int i=2;i<=a;i++){
//     fact=fact*i;

// }
// return fact;

// }

// int main(){
// int n;
// printf("enter a number");
// scanf("%d",&n);
// fact(n);

// printf("%ld",fact(n));

//     return 0;
// }

int main(){

int n;
printf("enter a number");
scanf("%d",&n);

int k=n;
int sum=0;
int ld=0;
while(n>0){

ld=n%10;

int fact=1;
for(int i=2;i<=ld;i++){
    fact = fact*i;
}

sum=sum+fact;
n=n/10;

}
n=k;
if(k==sum) printf("%d is a krisnomurty no",n);
else printf("%d is not a krisnomurty no",n);

    return 0;
}








// Q sum of prime no upto 1st nth term

// #include <stdio.h>

// int primecheck(int n) {
//     int a=0;
//     for (int i = 2; i <= n - 1; i++) {
//         if (n % i == 0) {
//             a=1;
//             // break;     ekhane break lagbe na karon 1 bar if condition hit korar por tarpor r na korleo a=1 e thakbe
//         }
//     }
//     return a;
// }

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;

//     for (int i = 2; i <= n; i++) {
//         if (primecheck(i)==0) {
//             sum = sum + i;
//         }
//     }

//     printf("The sum of the prime numbers up to %d is: %d\n", n, sum);

//     return 0;
// }






//Q sum of 1st n prime number


// int primecheck(int n)    // ei function ta prime no kina seta check kor6e
// {
//     int a = 0;
//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             a = 1;
//             // break;     ekhane break lagbe na karon 1 bar if condition hit korar por tarpor r na korleo a=1 e thakbe
//         }
//     }
//     return a;
// }

// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     int number = 2;
//     int i = 1; // eta for loop diye possible na karon if hit korle tobei i++ hobe na hole hobe na

//     while (i <= n)
//     {
//         if (primecheck(number) == 0)
//         {
//             sum = sum + number;
//             i++;
//         }
//         number++;
//     }

//     printf("The sum of the prime numbers up to %d is: %d\n", n, sum);

//     return 0;
// }

























