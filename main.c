#include <stdio.h>
// Global variables
int board[3][3];
int turn = 0;

// Pre Declarations
int len(int arr[]);
void populateBoard();
void printBoard();

// Main
int main(void) {
  board[2][1] = 1;
  board[2][2] = 2;
  printf("Hello World\n");

  // Print Baord
  populateBoard();
  printBoard();

  while(turn < 9){

  }

  printf("Tie.");
  return 0;
}

// Functions
int len(int arr[]){
  size_t n = (sizeof(arr)/sizeof(arr[0]))+1;
  return n;
}

void populateBoard(){
  for(int y = 0; y < len(board); y++){
    for(int x = 0; x < len(board[y]); x++){
      // fill
    }
  }
}

void printBoard(){
  for(int y = 0; y < len(board); y++){
    for(int x = 0; x < len(board[y]); x++){
      int state = board[x][y];

      if(state == 0){
        printf("- ");
      }
      if(state == 1){
        printf("x ");
      }
      if(state == 2){
        printf("o ");
      }
    }
    printf("\n");
  }
}