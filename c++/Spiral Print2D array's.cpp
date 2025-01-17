#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
 
    
    int count=0;
    int total= nRows*nCols;
    
    int startingrow=0;
    int startingcol=0;
    int endrow= nRows-1;
    int endcol= nCols-1;
    while(count<total){
        
        // StartingRow
        for(int i= startingcol;count <total && i<=endcol;i++){
            cout << input[startingrow][i] << " ";
            count++;
        } 
          startingrow++;
        //EndingColumn
        for(int i= startingrow; count<total && i<=endrow ;i++){
            cout << input[i][endcol] << " ";
            count++;
        }
          endcol--;
        
        //EndRow
        
        for(int i=endcol;  count<total && i>=startingcol ;i--){
            cout << input[endrow][i] << " ";
            count++;
        }
        endrow--;
        
        // StartingCol
        
        for (int i=endrow;  count<total && i>=startingrow  ;i--){
            cout << input[i][startingcol] << " ";
            count++;
        }
        startingcol++;
        
        
    }
    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}

// sample inputs are given below to test the code
// Sample Input 1:
// 1
// 4 4 
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16
// Sample Output 1:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
// Sample Input 2:
// 2
// 3 3 
// 1 2 3 
// 4 5 6 
// 7 8 9
// 3 1
// 10
// 20
// 30
// Sample Output 2:
// 1 2 3 6 9 8 7 4 5 
// 10 20 30 








