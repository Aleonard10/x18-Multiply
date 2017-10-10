//Author: Alex Leonard
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int Table;
    int row;
    int col;
    
    Table = 0;
    vector < vector< int>> Num(13,vector<int>(13));
    
    row = 0;
    col = 0;
    while (row < 13)
    {
        while (col < 13)
        {
            Num[row][col] = row*col;
            col++;
        }
        row++;
        col = 0;
    }
    row = 0;
    col = 0;
    while (row < 12)
    {
        while (col < 12)
        {
            cout << Num[row+1][col+1] << "  ";
            col++;
        }
        cout << endl;
        row++;
        col = 0;
    }    
}
