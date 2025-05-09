#include <iostream>
using namespace std;

class Matrix
{
private:
    int rows, cols;
    int **arr;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;

        arr = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
        }
    }

    void input()
    {
        cout << "Enter elements for the " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void display() const
    {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int r = 2, c = 3;
    Matrix mat(r, c);
    mat.input();
    mat.display();
}
