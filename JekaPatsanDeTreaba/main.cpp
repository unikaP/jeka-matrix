#include <ctime>
#include <iostream>

using namespace std;

#define MAX_ROWS (7)
int a[MAX_ROWS][MAX_ROWS];

void printArray (){
    
    for (int i=0 ; i<3 ; i++) {
        for (int j=0; j<3 ; j++)
        {
            cout<<" "<< a[i][j];
        }
        cout<< endl;
    }
}

int mainDiagonalSum (int n)
{
    int sum = 0;
    for (int i=0; i< n; i++)
        for (int j=0; j< n;j++)
    {
        if (i==j)
            sum+=a[i][j];
    }
    return sum;
}

int secondaryDiagonalSum (int n)
{
    int sumE = 0;
    
    int k=--n;
    

    for (int i=0; i< 3; i++) {
        for (int j=0; j< 3;j++)
        {
            if ((i+j)==k) {
                sumE+=a[i][j];
               }
        }
    }
    return sumE;
}

int underMainDiagonalSum (int n)
{
    int sumUnderMainDiagonal= 0;
    
    for (int i=0; i< 3; i++) {
        for (int j=0; j< 3;j++)
        {
            if (i>j) {
                sumUnderMainDiagonal +=a[i][j];
            }
        }
    }
    return sumUnderMainDiagonal;
}





int main(int argc, const char * argv[]) {
    
    srand((unsigned)time(NULL));
    
    for (int i=0;i < 3; i++)
        for (int j=0;j < 3;j++)
        {
            a[i][j] = 1+ rand() % 100;
           
        }
    
    printArray();
    
    cout << "Sum  of under main diagonal elements: "<< underMainDiagonalSum(3)<< endl;
    
    cout << "Sum of main diagonal elements: "<< mainDiagonalSum(3) << endl;
    
    cout << "Sum of secondary diagonal elements: "<< secondaryDiagonalSum(3) << endl;
    
    return 0;
}
