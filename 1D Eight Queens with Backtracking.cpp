#include <iostream>
using namespace std;
//8 Queens 1-D array with backtracking & without goto


bool ok(int q[], int col) { 
    for (int rows = 0; rows < col; rows++) { //This is more effecient instead of having two loops we can have an additional variable to check
        if (abs(q[rows] == q[col]) || (col - rows) == abs(q[col] - q[rows])) //We check if the queens are right next next to eachother and does diagonal check too
            return false; //It is easier to check by having a separate variable called col
    }
    return true; 
}
        
              
int main(){ 
    int board[8], col = 0;
    board[0] = 0; // The entire board is set to 0
    int Solutions = 0;  // sets it to 0
        while (col >= 0) { 
                 col++;  // It increments our column by 1
                 
     if (col == 8) { // if the column equals to 8 we will print the board 
            
             cout << "Solution " << ++Solutions << ": ";  // ++solutions because if it was post it wouldn't work 
             //Sazid}
             
     for (int rows = 0; rows < 8; rows++) { 
              cout << board[rows];  
              }
             cout << endl;
         for (int rows = 0; rows < 8; rows++) {
            
             for (int j = 0; j < 8; j++) {
            
                 if (board[j] == rows)   // if the board 
                        
                         cout << " Q "; // The Q would stand for the Queen
                else 
                         cout << " - "; // not the Q
            }
                     cout << endl;
                }
        
                         cout << "\n";
                    
                            col--;  // decerements our column
                    
            }   else
            
                    board[col] = -1;  
             while (col >= 0) { 
                 
                     board[col]++; // this will increment the row 
                     
         if (board[col] == 8) // checks the row for any 8
         
                        col--; 
                        
            else if (ok(board, col)) // it will run the okay function 
            
                break; // exits out the program right after 
            } 
        }
            return 0; 
}
