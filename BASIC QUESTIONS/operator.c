//Question 1

// #include<stdio.h>
// int main()
// {
//    int a=5;
//    a=1,2,3;
//    printf("%d",a);
//    return 0; 
// }

//Question 2

// #include<stdio.h>
// int main()
// {
//     int a;
//     a=(1,2,3);
//     printf("%d",a);
//     return 0;
// }


//Question 3


// #include<stdio.h>
// int main()
// {
//  int x=2;
//  (x&1) ? printf("true"):printf("false");
//  return 0;
// }


//Question 4



// #include<stdio.h>
// int main()
// {
//     printf("%d",3*2);
// }


//Question 5

// #include<stdio.h>
// int main()
// {
//     int i=10;
//     i++;
//     i*i;
//     printf("%d\n",i);
//     return 0;
// }


//Question 6


#include<stdio.h>
int main()
{
    int a=1,b=3,c;
    c=b<<a;
    b=c*(b*(++a));
    a=a>>b;
    printf("%d",b);
    return 0;
}