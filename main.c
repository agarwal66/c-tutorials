#include<stdio.h>
#include <stdlib.h>
int main (){
//float *ptr;
 //---- reallocate memory
  int *ptr;
  ptr = (int*) calloc(5,sizeof(int));
  printf("enter a number(6):");
  for(int i=0; i<5; i++){
    scanf("%d", &ptr[i]);
  }
  ptr = (int*) calloc(5,sizeof(int));
  printf("enter a number(6):");
  for(int i=0; i<5; i++){
    scanf("%d", &ptr[i]);
  }
  for(int i=0; i<8; i++){
  printf("number %dd is %d", i, ptr[i]);
    }
  return 0;
  }
  // ptr[0] =1;
  // ptr[1] = 4;
  // ptr[3] = 3;
  // or number add krne h toh
  



















  
//   //---- free collac ques
//   int *ptr;
//   int n;
//   printf("enter n :");
//   scanf("%d", &n);
//   ptr = (int *) calloc(n, sizeof(int));
//    for(int i=0; i<5; i++) {
//   printf("%d\n", ptr[i]);
//      }
//   free(ptr);
//     ptr = (int *) calloc(2, sizeof(int));
//    for(int i=0; i<5; i++){
//       printf("%d\n", ptr[i]);
//    }
// return 0;
//   }
















// int main (){
// //float *ptr;
//   int *ptr;
//   int n;
//   printf("enter n :");
//   scanf("%d", &n);
//   ptr = (int *) calloc(5, sizeof(float));
//   //  ptr[0] =1;
//   //  ptr[1] = 4;
//   // ptr[3] = 3;
//    for(int i=0; i<5; i++) {
//   printf("%d\n", ptr[i]);
//      }
//   int *ptr;
//  ptr = (int *) malloc(5 * sizeof(int));
//   ptr[0] =1;
//   ptr[1] = 4;
//   ptr[3] = 3;
//   for(int i=0; i<5; i++) {
//  printf("%d\n", ptr[i]);
//  //printf("%d\n", sizof(int));
//     }
// //   printf("%f",sizeof(float));
// //   printf("%d\n",sizeof(char));
 //return 0;
// }