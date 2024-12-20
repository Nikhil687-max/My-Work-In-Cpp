#include<iostream>
using namespace std;
    
    
    
int main(){
    int i, j, k;
    int n, m, p;
    cout << "Enter the value of no.of rows and columns of matrix 'A' : ";
    cin >> n >> m;
    cout << "enter the no. of columns of matrix 'B' : ";
    cin >> p;
    int matrixA[n][m];
    int matrixB[m][p];

    cout << "                                              MATRIX A\n";
    for(i = 0;i < n;i++)
    {
        cout << "enter row no. "<< i+1 << " of matrix 'A' (" << m << " elements ) : ";    
    
        
        for(j = 0;j < m;j++){
            cin >> matrixA[i][j];
            
        }
        
    }
    
    cout << "                                              MATRIX B\n";
    for(i = 0;i < m;i++){
        cout << "enter row no. "<< i+1 << " of matrix 'B' (" << p << " elements ) : ";    
    
        for(j = 0 ;j < p;j++){
            cin >> matrixB[i][j];
        }
    }

    cout << "**********************************************RESULT MATRIX :";
    
    int result[n][p];
    for(i = 0;i < n;i++){
        cout << "\n                                               ";
        for(j = 0;j < p;j++){
            result[i][j] = 0;
            for(k = 0;k < m;k++){
                result[i][j] += matrixA[i][k]*matrixB[k][j];
            }
            
            int x = result[i][j];
            if(x < 10)cout << " " << result[i][j] << "   ";
            else if(x < 100)cout << " " << x << "  ";
            else if(x < 1000)cout << " " << x << " ";
            else{cout << "999+ ";};
        }

        
    }cout << "\n";
}
                                                   