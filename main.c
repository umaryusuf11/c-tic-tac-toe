#include <stdio.h>

int* generateBoard(){
  static int array[3][3];

  return array;
}

int len(int arr[]){
  size_t n = (sizeof(arr)/sizeof(arr[0]))+1;
  return n;
}

int main(void) {
  printf("Hello World\n");
  // Generate Board
  int board[3];
  printf("%d\n", len(board));


  
  return 0;
}

