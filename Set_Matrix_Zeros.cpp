#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    bool isCol = false;
    int R = matrix.size();
    int C = matrix[0].size();

    for (int i = 0; i < R; i++)
    {

        // To prevent the whole matrix from becoming 0 as [0, 0] will lead to wrong answers
        if (matrix[i][0] == 0)
        {
            isCol = true;
        }

        for (int j = 1; j < C; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < R; i++)
    {
        for (int j = 1; j < C; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < C; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (isCol)
    {
        for (int i = 0; i < R; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{

    return 0;
}